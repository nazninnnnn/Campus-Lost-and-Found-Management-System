#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QInputDialog>
#include <QDialog>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QFormLayout>
#include <QHBoxLayout>
#include <QRandomGenerator>
#include <QCoreApplication>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Set the location of the data file
    dataFilePath = QCoreApplication::applicationDirPath() + "/items.txt";

    // Load previously saved records
    items.loadFromFile(dataFilePath.toStdString());

    // Rebuild the Hash Table using the loaded records
    items.forEachItem([this](Item* item) {
        itemTable.insert(item);
    });

    // Refresh the tables
    refreshManageItemsTable();
    refreshPotentialMatchesTable();

    // Only logged-in teachers can update or delete records
    ui->updateItemButton->setEnabled(false);
    ui->deleteItemButton->setEnabled(false);

    // Improve table selection visibility
    ui->manageItemsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->manageItemsTable->setSelectionMode(QAbstractItemView::SingleSelection);

    ui->matchesTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->matchesTable->setSelectionMode(QAbstractItemView::SingleSelection);

    connect(ui->addItemButton, &QPushButton::clicked,
            this, [this]() {
                ui->stackedWidget->setCurrentWidget(ui->addItemPage);
            });

    connect(ui->matchesbutton, &QPushButton::clicked,
            this, [this]() {
                ui->stackedWidget->setCurrentWidget(ui->potentialMatchesPage);
            });

    connect(ui->SearchItembutton, &QPushButton::clicked,
            this, [this]() {
                ui->stackedWidget->setCurrentWidget(ui->searchItemsPage);
            });

    connect(ui->myItemsButton, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->myItemsPage);
    });

    connect(ui->togglePinVisibilityButton, &QPushButton::clicked, this, [=]() {

        if (ui->myItemPinInput->echoMode() == QLineEdit::Password) {

            ui->myItemPinInput->setEchoMode(QLineEdit::Normal);
            ui->togglePinVisibilityButton->setText("Hide");

        }
        else {

            ui->myItemPinInput->setEchoMode(QLineEdit::Password);
            ui->togglePinVisibilityButton->setText("Show");

        }

    });

    connect(ui->manageItemButton, &QPushButton::clicked,
            this, [this]() {
                refreshManageItemsTable();
                ui->stackedWidget->setCurrentWidget(ui->manageItemPage);
            });

    connect(ui->adminbutton, &QPushButton::clicked, this, [this]() {

        if (!isAdminLoggedIn && !showAdminLogin()) {
            return;
        }

        // Enable teacher controls
        ui->updateItemButton->setEnabled(true);
        ui->deleteItemButton->setEnabled(true);

        // Calculate statistics
        int total = 0;
        int lost = 0;
        int found = 0;
        int collected = 0;

        items.forEachItem([&](Item* item) {

            total++;

            QString status = QString::fromStdString(item->status);

            if (status.compare("Lost", Qt::CaseInsensitive) == 0)
                lost++;
            else if (status.compare("Found", Qt::CaseInsensitive) == 0)
                found++;
            else if (status.compare("Collected", Qt::CaseInsensitive) == 0)
                collected++;
        });

        ui->totalItemsValue->setText(QString::number(total));
        ui->lostItemsValue->setText(QString::number(lost));
        ui->foundItemsValue->setText(QString::number(found));
        ui->collectedItemsValue->setText(QString::number(collected));

        ui->stackedWidget->setCurrentWidget(ui->adminOverviewPage);
    });


    // Submit a new item
    connect(ui->submitItemButton, &QPushButton::clicked,
            this, [this]() {

                QString name = ui->itemNameInput->text().trimmed();
                QString color = ui->itemColorInput->text().trimmed();
                QString location = ui->itemLocationInput->text().trimmed();
                QString day = ui->itemDayInput->text().trimmed();
                QString date = ui->itemDateInput->date().toString("dd-MM-yyyy");
                QString status = ui->itemStatusInput->currentText();

                // Check required fields
                if (name.isEmpty() || color.isEmpty() ||
                    location.isEmpty() || day.isEmpty()) {

                    QMessageBox::warning(this, "Missing Information",
                                         "Please fill in all the fields.");
                    return;
                }

                // Add item to Linked List
                QString managementPin = QString::number(
                    QRandomGenerator::global()->bounded(1000, 10000)
                    );
                Item* newItem = items.addItem(
                    name.toStdString(),
                    color.toStdString(),
                    location.toStdString(),
                    day.toStdString(),
                    date.toStdString(),
                    status.toStdString(),
                    managementPin.toStdString()
                    );

                // Insert item into Hash Table
                itemTable.insert(newItem);

                saveItems();

                // Refresh Manage Items table
                refreshManageItemsTable();
                refreshPotentialMatchesTable();

                // Display success message
                showSuccessMessage(
                    "Item added successfully!\n"
                    "Item ID: " + QString::number(newItem->id) +
                    "\nManagement PIN: " + managementPin +
                    "\n\nKeep these credentials to manage your item."
                    );

                // Clear input fields
                ui->itemNameInput->clear();
                ui->itemColorInput->clear();
                ui->itemLocationInput->clear();
                ui->itemDayInput->clear();
                ui->itemDateInput->setDate(QDate::currentDate());
                ui->itemStatusInput->setCurrentIndex(0);
            });


    // Search for an item by ID
    connect(ui->searchButton, &QPushButton::clicked,
            this, [this]() {

                bool validInput;
                int id = ui->searchIdInput->text().toInt(&validInput);

                if (!validInput) {
                    QMessageBox::warning(this, "Invalid ID",
                                         "Please enter a valid numeric Item ID.");
                    return;
                }

                // Search using Hash Table
                Item* foundItem = itemTable.search(id);

                if (foundItem == nullptr) {
                    ui->searchResultLabel->setText("No item found with ID: "
                                                   + QString::number(id));
                    return;
                }

                // Display item details
                QString result =
                    "Item ID: " + QString::number(foundItem->id) +
                    "\nName: " + QString::fromStdString(foundItem->name) +
                    "\nColour: " + QString::fromStdString(foundItem->color) +
                    "\nLocation: " + QString::fromStdString(foundItem->location) +
                    "\nDay: " + QString::fromStdString(foundItem->day) +
                    "\nDate: " + QString::fromStdString(foundItem->date) +
                    "\nStatus: " + QString::fromStdString(foundItem->status);

                ui->searchResultLabel->setText(result);
            });


//my items stuff
    connect(ui->findMyItemButton, &QPushButton::clicked, this, [=]() {

        QString idText = ui->myItemIdInput->text().trimmed();
        QString pin = ui->myItemPinInput->text().trimmed();

        if (idText.isEmpty() || pin.isEmpty()) {
            QMessageBox::warning(this, "Missing Information",
                                 "Please enter both Item ID and Management PIN.");
            return;
        }

        bool validId;
        int id = idText.toInt(&validId);

        if (!validId) {
            QMessageBox::warning(this, "Invalid ID",
                                 "Please enter a valid Item ID.");
            return;
        }

        Item* foundItem = itemTable.search(id);

        if (foundItem == nullptr ||
            foundItem->managementPin != pin.toStdString()) {

            currentUserItem = nullptr;
            ui->myItemDetailsLabel->setText(
                "No matching item found. Please check your Item ID and PIN."
                );

            return;
        }

        currentUserItem = foundItem;

        QString details =
            "Item ID: " + QString::number(foundItem->id) +
            "\nName: " + QString::fromStdString(foundItem->name) +
            "\nColour: " + QString::fromStdString(foundItem->color) +
            "\nLocation: " + QString::fromStdString(foundItem->location) +
            "\nDay: " + QString::fromStdString(foundItem->day) +
            "\nDate: " + QString::fromStdString(foundItem->date) +
            "\nStatus: " + QString::fromStdString(foundItem->status);

        ui->myItemDetailsLabel->setText(details);

    });


    // Update selected item
    // Update item (Admin or My Items)
    auto updateItem = [this]() {

        if (!isUpdatingMyItem && !isAdminLoggedIn) {
            QMessageBox::warning(this, "Access Denied",
                                 "Only teachers can update items.");
            return;
        }

        Item* selectedItem = nullptr;

        // My Items: use the PIN-verified item
        if (isUpdatingMyItem) {
            selectedItem = currentUserItem;

            if (selectedItem == nullptr) {
                QMessageBox::warning(this, "No Item",
                                     "Please verify your Item ID and PIN first.");
                return;
            }
        }
        // Manage Items: use the selected table row
        else {
            int row = ui->manageItemsTable->currentRow();

            if (row < 0) {
                QMessageBox::warning(this, "No Selection",
                                     "Please select an item from the table first.");
                return;
            }

            int id = ui->manageItemsTable->item(row, 0)->text().toInt();
            selectedItem = itemTable.search(id);

            if (selectedItem == nullptr) {
                QMessageBox::warning(this, "Error", "Item not found.");
                return;
            }
        }

        // Check for a matching item
        Item* matchingItem = nullptr;

        QString currentStatus =
            QString::fromStdString(selectedItem->status);

        QString oppositeStatus;

        if (currentStatus.compare("Lost", Qt::CaseInsensitive) == 0)
            oppositeStatus = "Found";
        else if (currentStatus.compare("Found", Qt::CaseInsensitive) == 0)
            oppositeStatus = "Lost";

        if (!oppositeStatus.isEmpty()) {
            items.forEachItem([&](Item* candidate) {
                if (candidate != selectedItem &&
                    QString::fromStdString(candidate->status)
                            .compare(oppositeStatus, Qt::CaseInsensitive) == 0 &&
                    QString::fromStdString(candidate->name)
                            .compare(QString::fromStdString(selectedItem->name),
                                     Qt::CaseInsensitive) == 0 &&
                    QString::fromStdString(candidate->color)
                            .compare(QString::fromStdString(selectedItem->color),
                                     Qt::CaseInsensitive) == 0) {
                    matchingItem = candidate;
                }
            });
        }

        if (matchingItem != nullptr) {

            QMessageBox::StandardButton answer =
                QMessageBox::question(
                    this,
                    "Matching Item Found",
                    "A matching Lost/Found item exists.\n"
                    "Do you want to mark both items as Collected?",
                    QMessageBox::Yes | QMessageBox::No
                    );

            if (answer == QMessageBox::Yes) {
                selectedItem->status = "Collected";
                matchingItem->status = "Collected";

                showSuccessMessage(
                    "Both items have been marked as Collected."
                    );
            }
            else {
                return;
            }
        }
        else {
            QStringList statuses = {"Lost", "Found", "Collected"};
            bool ok;

            QString newStatus = QInputDialog::getItem(
                this,
                "Update Item Status",
                "Select the new status:",
                statuses,
                0,
                false,
                &ok
                );

            if (!ok)
                return;

            selectedItem->status = newStatus.toStdString();

            showSuccessMessage("Item status updated successfully.");
        }

        saveItems();

        refreshManageItemsTable();
        refreshPotentialMatchesTable();

        // Refresh My Items details if the user updated their own item
        if (isUpdatingMyItem) {
            QString details =
                "Item ID: " + QString::number(selectedItem->id) +
                "\nName: " + QString::fromStdString(selectedItem->name) +
                "\nColour: " + QString::fromStdString(selectedItem->color) +
                "\nLocation: " + QString::fromStdString(selectedItem->location) +
                "\nDay: " + QString::fromStdString(selectedItem->day) +
                "\nDate: " + QString::fromStdString(selectedItem->date) +
                "\nStatus: " + QString::fromStdString(selectedItem->status);

            ui->myItemDetailsLabel->setText(details);
        }
    };

    // Connect both Update buttons
    connect(ui->updateItemButton, &QPushButton::clicked,
            this, [this, updateItem]() {
                isUpdatingMyItem = false;
                updateItem();
            });

    connect(ui->myItemUpdateButton, &QPushButton::clicked,
            this, [this, updateItem]() {
                isUpdatingMyItem = true;
                updateItem();
            });

    // Delete selected item
    // Delete item (Admin or My Items)
    auto deleteItem = [this]() {

        if (!isUpdatingMyItem && !isAdminLoggedIn) {
            QMessageBox::warning(this, "Access Denied",
                                 "Only teachers can delete items.");
            return;
        }

        Item* selectedItem = nullptr;
        int id = -1;

        // My Items: use the PIN-verified item
        if (isUpdatingMyItem) {
            selectedItem = currentUserItem;

            if (selectedItem == nullptr) {
                QMessageBox::warning(this, "No Item",
                                     "Please verify your Item ID and PIN first.");
                return;
            }

            id = selectedItem->id;
        }
        // Manage Items: use the selected table row
        else {
            int row = ui->manageItemsTable->currentRow();

            if (row < 0) {
                QMessageBox::warning(this, "No Selection",
                                     "Please select an item from the table first.");
                return;
            }

            id = ui->manageItemsTable->item(row, 0)->text().toInt();
            selectedItem = itemTable.search(id);

            if (selectedItem == nullptr) {
                QMessageBox::warning(this, "Error", "Item not found.");
                return;
            }
        }

        QMessageBox::StandardButton answer =
            QMessageBox::question(
                this,
                "Confirm Deletion",
                "Are you sure you want to delete this item?\n\n"
                "Item: " + QString::fromStdString(selectedItem->name) +
                    "\nID: " + QString::number(id),
                QMessageBox::Yes | QMessageBox::No
                );

        if (answer != QMessageBox::Yes)
            return;
        // Remove from Hash Table first
        itemTable.remove(id);

        // Then remove from Linked List
        items.deleteItem(id);

        // Save updated records
        saveItems();

        // Clear My Items access after deletion
        if (isUpdatingMyItem) {
            currentUserItem = nullptr;
            ui->myItemDetailsLabel->setText(
                "Your item has been deleted."
                );
            ui->myItemIdInput->clear();
            ui->myItemPinInput->clear();
        }

        refreshManageItemsTable();
        refreshPotentialMatchesTable();

        showSuccessMessage("Item deleted successfully.");
    };

    // Connect both Delete buttons
    connect(ui->deleteItemButton, &QPushButton::clicked,
            this, [this, deleteItem]() {
                isUpdatingMyItem = false;
                deleteItem();
            });

    connect(ui->myItemDeleteButton, &QPushButton::clicked,
            this, [this, deleteItem]() {
                isUpdatingMyItem = true;
                deleteItem();
            });

    // Admin Logout
    connect(ui->logoutButton, &QPushButton::clicked, this, [this]() {

        isAdminLoggedIn = false;

        ui->updateItemButton->setEnabled(false);
        ui->deleteItemButton->setEnabled(false);

        ui->stackedWidget->setCurrentWidget(ui->addItemPage);

        QMessageBox::information(this, "Logged Out",
                                 "You have been logged out successfully.");
    });
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::saveItems()
{
    if (!items.saveToFile(dataFilePath.toStdString())) {
        QMessageBox::warning(this, "Storage Error",
                             "Could not save item records.");
    }
}

void MainWindow::refreshManageItemsTable()
{
    ui->manageItemsTable->setRowCount(0);

    items.forEachItem([this](Item* item) {

        int row = ui->manageItemsTable->rowCount();

        ui->manageItemsTable->insertRow(row);

        ui->manageItemsTable->setItem(row, 0,
                                      new QTableWidgetItem(QString::number(item->id)));

        ui->manageItemsTable->setItem(row, 1,
                                      new QTableWidgetItem(QString::fromStdString(item->name)));

        ui->manageItemsTable->setItem(row, 2,
                                      new QTableWidgetItem(QString::fromStdString(item->color)));

        ui->manageItemsTable->setItem(row, 3,
                                      new QTableWidgetItem(QString::fromStdString(item->location)));

        ui->manageItemsTable->setItem(row, 4,
                                      new QTableWidgetItem(QString::fromStdString(item->day)));

        ui->manageItemsTable->setItem(row, 5,
                                      new QTableWidgetItem(QString::fromStdString(item->date)));

        ui->manageItemsTable->setItem(row, 6,
                                      new QTableWidgetItem(QString::fromStdString(item->status)));
    });
}

void MainWindow::refreshPotentialMatchesTable()
{
    ui->matchesTable->setRowCount(0);
    // Adjust Potential Matches table columns
    ui->matchesTable->setColumnWidth(0, 200);
    ui->matchesTable->setColumnWidth(1, 200);

    // Allow long text to wrap
    ui->matchesTable->setWordWrap(true);
    ui->matchesTable->resizeRowsToContents();

    items.forEachMatch([this](Item* lost, Item* found) {

        int row = ui->matchesTable->rowCount();

        ui->matchesTable->insertRow(row);

        ui->matchesTable->setItem(row, 0,
                                  new QTableWidgetItem(
                                      QString::fromStdString(lost->name) +
                                      " (ID: " + QString::number(lost->id) + ")"
                                      ));

        ui->matchesTable->setItem(row, 1,
                                  new QTableWidgetItem(
                                      QString::fromStdString(found->name) +
                                      " (ID: " + QString::number(found->id) + ")"
                                      ));

        ui->matchesTable->setItem(row, 2,
                                  new QTableWidgetItem(QString::fromStdString(lost->color)));

        ui->matchesTable->setItem(row, 3,
                                  new QTableWidgetItem(
                                      QString::fromStdString(lost->location) +
                                      " / " +
                                      QString::fromStdString(found->location)
                                      ));

        ui->matchesTable->setItem(row, 4,
                                  new QTableWidgetItem("Potential Match"));
    });
      ui->matchesTable->resizeRowsToContents();
}

void MainWindow::showSuccessMessage(const QString &message)
{
    QDialog dialog(this);

    dialog.setWindowTitle("Success");
    dialog.setFixedSize(340, 170);
    dialog.setModal(true);

    dialog.setStyleSheet(
        "QDialog {"
        "background-color: white;"
        "}"
        "QLabel {"
        "color: #1E293B;"
        "font-size: 14px;"
        "}"
        "QPushButton {"
        "color: white;"
        "background-color: #0284C7;"
        "border: none;"
        "border-radius: 5px;"
        "padding: 8px 25px;"
        "}"
        "QPushButton:hover {"
        "background-color: #0369A1;"
        "}"
        );

    QVBoxLayout *layout = new QVBoxLayout(&dialog);

    QLabel *messageLabel = new QLabel(message);
    messageLabel->setAlignment(Qt::AlignCenter);
    messageLabel->setWordWrap(true);

    QPushButton *okButton = new QPushButton("OK");

    layout->addWidget(messageLabel);
    layout->addWidget(okButton, 0, Qt::AlignCenter);

    connect(okButton, &QPushButton::clicked,
            &dialog, &QDialog::accept);

    dialog.exec();
}



bool MainWindow::showAdminLogin()
{
    QDialog loginDialog(this);

    loginDialog.setWindowTitle("Teacher Login");
    loginDialog.setFixedSize(350, 220);
    loginDialog.setModal(true);

    loginDialog.setStyleSheet(
        "QDialog { background-color: white; }"
        "QLabel { color: #1E293B; font-size: 13px; }"
        "QLineEdit { color: #1E293B; background-color: white;"
        "border: 1px solid #CBD5E1; border-radius: 5px; padding: 7px; }"
        "QPushButton { color: white; background-color: #0284C7;"
        "border: none; border-radius: 5px; padding: 8px 18px; }"
        "QPushButton:hover { background-color: #0369A1; }"
        );

    QVBoxLayout *layout = new QVBoxLayout(&loginDialog);

    QLabel *heading = new QLabel("Teacher / Admin Login");
    heading->setAlignment(Qt::AlignCenter);
    heading->setStyleSheet("font-size: 17px; font-weight: bold;");

    QFormLayout *formLayout = new QFormLayout();

    QLineEdit *teacherIdInput = new QLineEdit();
    teacherIdInput->setPlaceholderText("Enter Teacher ID");

    QLineEdit *passwordInput = new QLineEdit();
    passwordInput->setPlaceholderText("Enter Password");
    passwordInput->setEchoMode(QLineEdit::Password);

    formLayout->addRow("Teacher ID:", teacherIdInput);
    formLayout->addRow("Password:", passwordInput);

    QPushButton *loginButton = new QPushButton("Login");
    QPushButton *cancelButton = new QPushButton("Cancel");

    QHBoxLayout *buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(loginButton);
    buttonLayout->addWidget(cancelButton);

    layout->addWidget(heading);
    layout->addLayout(formLayout);
    layout->addLayout(buttonLayout);

    connect(loginButton, &QPushButton::clicked, &loginDialog, [&]() {

        if (teacherIdInput->text() == "teacher01" &&
            passwordInput->text() == "admin123") {

            loginDialog.accept();
        }
        else {
            QMessageBox::warning(
                &loginDialog,
                "Login Failed",
                "Incorrect Teacher ID or Password."
                );

            passwordInput->clear();
            passwordInput->setFocus();
        }
    });

    connect(cancelButton, &QPushButton::clicked,
            &loginDialog, &QDialog::reject);

    if (loginDialog.exec() == QDialog::Accepted) {
        isAdminLoggedIn = true;
        return true;
    }

    return false;
}



