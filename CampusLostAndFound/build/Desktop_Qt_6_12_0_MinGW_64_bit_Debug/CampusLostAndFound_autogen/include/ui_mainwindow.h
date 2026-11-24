/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *adminbutton;
    QPushButton *manageItemButton;
    QPushButton *SearchItembutton;
    QPushButton *addItemButton;
    QPushButton *matchesbutton;
    QStackedWidget *stackedWidget;
    QWidget *manageItemPage;
    QLabel *manageItemHeading;
    QTableWidget *manageItemsTable;
    QPushButton *updateItemButton;
    QPushButton *deleteItemButton;
    QWidget *potentialMatchesPage;
    QLabel *matchesHeading;
    QTableWidget *matchesTable;
    QWidget *addItemPage;
    QLabel *addItemHeading;
    QLabel *itemNameLabel;
    QLineEdit *itemNameInput;
    QLabel *itemColorLabel;
    QLineEdit *itemColorInput;
    QLabel *itemLocationLabel;
    QLineEdit *itemLocationInput;
    QLineEdit *itemDayInput;
    QLabel *itemDayLabel;
    QDateEdit *itemDateInput;
    QLabel *itemDateLabel;
    QLabel *itemStatusLabel;
    QComboBox *itemStatusInput;
    QPushButton *submitItemButton;
    QWidget *searchItemsPage;
    QLabel *searchItemsHeading;
    QLabel *searchIdLabel;
    QLineEdit *searchIdInput;
    QPushButton *searchButton;
    QLabel *searchResultLabel;
    QWidget *myItemsPage;
    QLabel *myItemsHeading;
    QLabel *myItemPinLabel;
    QLabel *myItemIdLabel;
    QLineEdit *myItemIdInput;
    QLineEdit *myItemPinInput;
    QPushButton *findMyItemButton;
    QLabel *myItemDetailsLabel;
    QPushButton *myItemUpdateButton;
    QPushButton *myItemDeleteButton;
    QPushButton *togglePinVisibilityButton;
    QWidget *adminOverviewPage;
    QLabel *adminOverviewHeading;
    QLabel *totalItemsLabel;
    QLabel *totalItemsValue;
    QLabel *lostItemsLabel;
    QLabel *foundItemsLabel;
    QLabel *lostItemsValue;
    QLabel *foundItemsValue;
    QLabel *collectedItemsLabel;
    QLabel *collectedItemsValue;
    QPushButton *logoutButton;
    QPushButton *myItemsButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1100, 700);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 351, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("OCR A")});
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 50, 261, 20));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        adminbutton = new QPushButton(centralwidget);
        adminbutton->setObjectName("adminbutton");
        adminbutton->setGeometry(QRect(10, 320, 160, 40));
        adminbutton->setMinimumSize(QSize(160, 40));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(false);
        adminbutton->setFont(font2);
        manageItemButton = new QPushButton(centralwidget);
        manageItemButton->setObjectName("manageItemButton");
        manageItemButton->setGeometry(QRect(10, 360, 160, 40));
        manageItemButton->setMinimumSize(QSize(160, 40));
        manageItemButton->setFont(font2);
        SearchItembutton = new QPushButton(centralwidget);
        SearchItembutton->setObjectName("SearchItembutton");
        SearchItembutton->setGeometry(QRect(10, 180, 160, 40));
        SearchItembutton->setMinimumSize(QSize(160, 40));
        SearchItembutton->setFont(font2);
        addItemButton = new QPushButton(centralwidget);
        addItemButton->setObjectName("addItemButton");
        addItemButton->setGeometry(QRect(10, 100, 160, 40));
        addItemButton->setMinimumSize(QSize(160, 40));
        addItemButton->setFont(font2);
        matchesbutton = new QPushButton(centralwidget);
        matchesbutton->setObjectName("matchesbutton");
        matchesbutton->setGeometry(QRect(10, 140, 160, 40));
        matchesbutton->setMinimumSize(QSize(160, 40));
        matchesbutton->setFont(font2);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(180, 100, 781, 541));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(234, 242, 248, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        stackedWidget->setPalette(palette);
        stackedWidget->setFont(font1);
        stackedWidget->setAutoFillBackground(false);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: #EAF2F8;\n"
"border: 1px solid #CBD5E1;\n"
"border-radius: 8px;"));
        manageItemPage = new QWidget();
        manageItemPage->setObjectName("manageItemPage");
        manageItemHeading = new QLabel(manageItemPage);
        manageItemHeading->setObjectName("manageItemHeading");
        manageItemHeading->setGeometry(QRect(30, 30, 141, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        manageItemHeading->setPalette(palette1);
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        manageItemHeading->setFont(font3);
        manageItemHeading->setAlignment(Qt::AlignmentFlag::AlignCenter);
        manageItemsTable = new QTableWidget(manageItemPage);
        if (manageItemsTable->columnCount() < 7)
            manageItemsTable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        manageItemsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        manageItemsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        manageItemsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        manageItemsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        manageItemsTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        manageItemsTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        manageItemsTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        manageItemsTable->setObjectName("manageItemsTable");
        manageItemsTable->setGeometry(QRect(30, 80, 701, 321));
        manageItemsTable->setStyleSheet(QString::fromUtf8("QHeaderView::section {\n"
"    color: #1E293B;\n"
"    background-color: #E2E8F0;\n"
"    border: 1px solid #CBD5E1;\n"
"    padding: 6px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    color: #1E293B;\n"
"    background-color: white;\n"
"    gridline-color: #CBD5E1;\n"
"    selection-background-color: #DBEAFE;\n"
"    selection-color: #1E293B;\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"    color: #1E293B;\n"
"    padding: 5px;\n"
"}\n"
"QTableWidget::item:selected {\n"
"    background-color: #BFDBFE;\n"
"    color: #1E293B;\n"
"}\n"
""));
        manageItemsTable->setColumnCount(7);
        updateItemButton = new QPushButton(manageItemPage);
        updateItemButton->setObjectName("updateItemButton");
        updateItemButton->setGeometry(QRect(60, 410, 81, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        QBrush brush2(QColor(31, 155, 93, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        updateItemButton->setPalette(palette2);
        updateItemButton->setFont(font1);
        deleteItemButton = new QPushButton(manageItemPage);
        deleteItemButton->setObjectName("deleteItemButton");
        deleteItemButton->setGeometry(QRect(60, 450, 80, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        deleteItemButton->setPalette(palette3);
        deleteItemButton->setFont(font1);
        stackedWidget->addWidget(manageItemPage);
        potentialMatchesPage = new QWidget();
        potentialMatchesPage->setObjectName("potentialMatchesPage");
        matchesHeading = new QLabel(potentialMatchesPage);
        matchesHeading->setObjectName("matchesHeading");
        matchesHeading->setGeometry(QRect(40, 30, 121, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        matchesHeading->setPalette(palette4);
        matchesHeading->setFont(font1);
        matchesHeading->setAlignment(Qt::AlignmentFlag::AlignCenter);
        matchesTable = new QTableWidget(potentialMatchesPage);
        if (matchesTable->columnCount() < 5)
            matchesTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        matchesTable->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        matchesTable->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        matchesTable->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        matchesTable->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        matchesTable->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        matchesTable->setObjectName("matchesTable");
        matchesTable->setGeometry(QRect(40, 70, 681, 411));
        QPalette palette5;
        QBrush brush3(QColor(30, 41, 59, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush3);
        QBrush brush4(QColor(255, 255, 255, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush4);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush3);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush3);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush4);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush4);
        QBrush brush5(QColor(219, 234, 254, 255));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush5);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush3);
        QBrush brush6(QColor(30, 41, 59, 128));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush6);
#endif
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush3);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush4);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush3);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush3);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush4);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush4);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush5);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush6);
#endif
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush4);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush3);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush3);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush4);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush4);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush5);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush6);
#endif
        matchesTable->setPalette(palette5);
        matchesTable->setStyleSheet(QString::fromUtf8("QHeaderView::section {\n"
"    color: #1E293B;\n"
"    background-color: #E2E8F0;\n"
"    border: 1px solid #CBD5E1;\n"
"    padding: 6px;\n"
"    font-weight: bold;\n"
"}\n"
"QTableWidget {\n"
"    color: #1E293B;\n"
"    background-color: white;\n"
"    gridline-color: #CBD5E1;\n"
"    selection-background-color: #DBEAFE;\n"
"    selection-color: #1E293B;\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"    color: #1E293B;\n"
"    padding: 5px;\n"
"}\n"
"QTableWidget::item:selected {\n"
"    background-color: #BFDBFE;\n"
"    color: #1E293B;\n"
"}"));
        matchesTable->setColumnCount(5);
        stackedWidget->addWidget(potentialMatchesPage);
        addItemPage = new QWidget();
        addItemPage->setObjectName("addItemPage");
        addItemHeading = new QLabel(addItemPage);
        addItemHeading->setObjectName("addItemHeading");
        addItemHeading->setGeometry(QRect(30, 10, 241, 41));
        QPalette palette6;
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        addItemHeading->setPalette(palette6);
        QFont font4;
        font4.setPointSize(11);
        addItemHeading->setFont(font4);
        addItemHeading->setAlignment(Qt::AlignmentFlag::AlignCenter);
        itemNameLabel = new QLabel(addItemPage);
        itemNameLabel->setObjectName("itemNameLabel");
        itemNameLabel->setGeometry(QRect(30, 80, 71, 31));
        QPalette palette7;
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        itemNameLabel->setPalette(palette7);
        QFont font5;
        font5.setPointSize(9);
        itemNameLabel->setFont(font5);
        itemNameLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        itemNameInput = new QLineEdit(addItemPage);
        itemNameInput->setObjectName("itemNameInput");
        itemNameInput->setGeometry(QRect(130, 80, 171, 31));
        QPalette palette8;
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        QBrush brush7(QColor(202, 202, 202, 255));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush7);
        QBrush brush8(QColor(103, 103, 103, 255));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        itemNameInput->setPalette(palette8);
        itemNameInput->setFont(font5);
        itemColorLabel = new QLabel(addItemPage);
        itemColorLabel->setObjectName("itemColorLabel");
        itemColorLabel->setGeometry(QRect(30, 130, 71, 31));
        QPalette palette9;
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush4);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush4);
        QBrush brush9(QColor(127, 127, 127, 255));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush9);
        QBrush brush10(QColor(170, 170, 170, 255));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush10);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush4);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        QBrush brush11(QColor(255, 255, 220, 255));
        brush11.setStyle(Qt::BrushStyle::SolidPattern);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush11);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
        QBrush brush12(QColor(0, 0, 0, 127));
        brush12.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush4);
#endif
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush4);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush4);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush9);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush10);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush4);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush11);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush4);
#endif
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush9);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush4);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush4);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush9);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush10);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush9);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush4);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush9);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush4);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush11);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
        QBrush brush13(QColor(127, 127, 127, 127));
        brush13.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush4);
#endif
        itemColorLabel->setPalette(palette9);
        itemColorLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        itemColorInput = new QLineEdit(addItemPage);
        itemColorInput->setObjectName("itemColorInput");
        itemColorInput->setGeometry(QRect(130, 130, 171, 31));
        QPalette palette10;
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush14(QColor(10, 10, 10, 255));
        brush14.setStyle(Qt::BrushStyle::SolidPattern);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush14);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush14);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        itemColorInput->setPalette(palette10);
        QFont font6;
        font6.setPointSize(9);
        font6.setItalic(false);
        itemColorInput->setFont(font6);
        itemLocationLabel = new QLabel(addItemPage);
        itemLocationLabel->setObjectName("itemLocationLabel");
        itemLocationLabel->setGeometry(QRect(30, 180, 71, 31));
        QPalette palette11;
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        itemLocationLabel->setPalette(palette11);
        itemLocationLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        itemLocationInput = new QLineEdit(addItemPage);
        itemLocationInput->setObjectName("itemLocationInput");
        itemLocationInput->setGeometry(QRect(130, 180, 171, 31));
        QPalette palette12;
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        itemLocationInput->setPalette(palette12);
        itemLocationInput->setFont(font6);
        itemDayInput = new QLineEdit(addItemPage);
        itemDayInput->setObjectName("itemDayInput");
        itemDayInput->setGeometry(QRect(130, 230, 171, 31));
        QPalette palette13;
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        itemDayInput->setPalette(palette13);
        itemDayInput->setFont(font6);
        itemDayInput->setMouseTracking(true);
        itemDayLabel = new QLabel(addItemPage);
        itemDayLabel->setObjectName("itemDayLabel");
        itemDayLabel->setGeometry(QRect(30, 230, 71, 31));
        QPalette palette14;
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        itemDayLabel->setPalette(palette14);
        itemDayLabel->setFont(font1);
        itemDayLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        itemDateInput = new QDateEdit(addItemPage);
        itemDateInput->setObjectName("itemDateInput");
        itemDateInput->setGeometry(QRect(130, 280, 121, 31));
        QPalette palette15;
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush3);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush4);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush3);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush3);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush4);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush4);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush6);
#endif
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush3);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush4);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush3);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush3);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush4);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush4);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush6);
#endif
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush4);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush3);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush3);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush4);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush4);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush6);
#endif
        itemDateInput->setPalette(palette15);
        itemDateInput->setStyleSheet(QString::fromUtf8("\n"
"QDateEdit {\n"
"    color: #1E293B;\n"
"    background-color: white;\n"
"    border: 1px solid #CBD5E1;\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QCalendarWidget QWidget {\n"
"    color: #1E293B;\n"
"    background-color: white;\n"
"}\n"
"\n"
"QCalendarWidget QToolButton {\n"
"    color: #1E293B;\n"
"    background-color: #F1F5F9;\n"
"}\n"
"\n"
"QCalendarWidget QAbstractItemView {\n"
"    color: #1E293B;\n"
"    background-color: white;\n"
"    selection-background-color: #0284C7;\n"
"    selection-color: white;\n"
"}\n"
""));
        itemDateInput->setCalendarPopup(true);
        itemDateLabel = new QLabel(addItemPage);
        itemDateLabel->setObjectName("itemDateLabel");
        itemDateLabel->setGeometry(QRect(30, 280, 71, 31));
        QPalette palette16;
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        itemDateLabel->setPalette(palette16);
        itemDateLabel->setFont(font1);
        itemDateLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        itemStatusLabel = new QLabel(addItemPage);
        itemStatusLabel->setObjectName("itemStatusLabel");
        itemStatusLabel->setGeometry(QRect(30, 330, 71, 31));
        QPalette palette17;
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        itemStatusLabel->setPalette(palette17);
        itemStatusLabel->setFont(font1);
        itemStatusLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        itemStatusInput = new QComboBox(addItemPage);
        itemStatusInput->addItem(QString());
        itemStatusInput->addItem(QString());
        itemStatusInput->setObjectName("itemStatusInput");
        itemStatusInput->setGeometry(QRect(130, 330, 91, 31));
        QPalette palette18;
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush3);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush4);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush3);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush3);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush4);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush6);
#endif
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush3);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush4);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush3);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush3);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush4);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush6);
#endif
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush4);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush3);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush3);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush4);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush6);
#endif
        itemStatusInput->setPalette(palette18);
        itemStatusInput->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    color: #1E293B;\n"
"    background-color: white;\n"
"    border: 1px solid #CBD5E1;\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    color: #1E293B;\n"
"    background-color: white;\n"
"    selection-background-color: #DBEAFE;\n"
"    selection-color: #1E293B;\n"
"}"));
        submitItemButton = new QPushButton(addItemPage);
        submitItemButton->setObjectName("submitItemButton");
        submitItemButton->setGeometry(QRect(70, 380, 81, 31));
        QPalette palette19;
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush);
#endif
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush);
#endif
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush);
#endif
        submitItemButton->setPalette(palette19);
        stackedWidget->addWidget(addItemPage);
        itemNameInput->raise();
        addItemHeading->raise();
        itemNameLabel->raise();
        itemColorLabel->raise();
        itemColorInput->raise();
        itemLocationLabel->raise();
        itemLocationInput->raise();
        itemDayInput->raise();
        itemDayLabel->raise();
        itemDateInput->raise();
        itemDateLabel->raise();
        itemStatusLabel->raise();
        itemStatusInput->raise();
        submitItemButton->raise();
        searchItemsPage = new QWidget();
        searchItemsPage->setObjectName("searchItemsPage");
        searchItemsHeading = new QLabel(searchItemsPage);
        searchItemsHeading->setObjectName("searchItemsHeading");
        searchItemsHeading->setGeometry(QRect(40, 30, 201, 31));
        QPalette palette20;
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        searchItemsHeading->setPalette(palette20);
        searchItemsHeading->setFont(font4);
        searchItemsHeading->setAlignment(Qt::AlignmentFlag::AlignCenter);
        searchIdLabel = new QLabel(searchItemsPage);
        searchIdLabel->setObjectName("searchIdLabel");
        searchIdLabel->setGeometry(QRect(40, 90, 101, 41));
        QPalette palette21;
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        searchIdLabel->setPalette(palette21);
        searchIdLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        searchIdInput = new QLineEdit(searchItemsPage);
        searchIdInput->setObjectName("searchIdInput");
        searchIdInput->setGeometry(QRect(40, 140, 141, 31));
        QPalette palette22;
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        searchIdInput->setPalette(palette22);
        searchButton = new QPushButton(searchItemsPage);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(40, 200, 101, 31));
        QPalette palette23;
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush);
#endif
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush);
#endif
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush);
#endif
        searchButton->setPalette(palette23);
        QFont font7;
        font7.setPointSize(10);
        font7.setBold(false);
        searchButton->setFont(font7);
        searchResultLabel = new QLabel(searchItemsPage);
        searchResultLabel->setObjectName("searchResultLabel");
        searchResultLabel->setGeometry(QRect(40, 240, 281, 171));
        QPalette palette24;
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush3);
        QBrush brush15(QColor(248, 250, 252, 255));
        brush15.setStyle(Qt::BrushStyle::SolidPattern);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush15);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush3);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush3);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush15);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush15);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush6);
#endif
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush3);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush15);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush3);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush3);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush15);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush15);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush6);
#endif
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush15);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush3);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush3);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush15);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush15);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush6);
#endif
        searchResultLabel->setPalette(palette24);
        searchResultLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #1E293B;\n"
"    background-color: #F8FAFC;\n"
"    border: 1px solid #CBD5E1;\n"
"    border-radius: 6px;\n"
"    padding: 10px;\n"
"}"));
        searchResultLabel->setWordWrap(true);
        stackedWidget->addWidget(searchItemsPage);
        myItemsPage = new QWidget();
        myItemsPage->setObjectName("myItemsPage");
        myItemsHeading = new QLabel(myItemsPage);
        myItemsHeading->setObjectName("myItemsHeading");
        myItemsHeading->setGeometry(QRect(30, 50, 181, 31));
        QPalette palette25;
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette25.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette25.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette25.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        myItemsHeading->setPalette(palette25);
        myItemsHeading->setFont(font1);
        myItemsHeading->setAlignment(Qt::AlignmentFlag::AlignCenter);
        myItemPinLabel = new QLabel(myItemsPage);
        myItemPinLabel->setObjectName("myItemPinLabel");
        myItemPinLabel->setGeometry(QRect(30, 150, 111, 31));
        QPalette palette26;
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette26.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette26.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette26.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        myItemPinLabel->setPalette(palette26);
        myItemPinLabel->setFont(font5);
        myItemPinLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        myItemIdLabel = new QLabel(myItemsPage);
        myItemIdLabel->setObjectName("myItemIdLabel");
        myItemIdLabel->setGeometry(QRect(30, 100, 111, 31));
        QPalette palette27;
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette27.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette27.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette27.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        myItemIdLabel->setPalette(palette27);
        myItemIdLabel->setFont(font1);
        myItemIdLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        myItemIdInput = new QLineEdit(myItemsPage);
        myItemIdInput->setObjectName("myItemIdInput");
        myItemIdInput->setGeometry(QRect(170, 100, 181, 31));
        myItemIdInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: #1E293B;\n"
"    background-color: white;\n"
"    border: 1px solid #CBD5E1;\n"
"    border-radius: 5px;\n"
"    padding: 7px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #0284C7;\n"
"}\n"
""));
        myItemPinInput = new QLineEdit(myItemsPage);
        myItemPinInput->setObjectName("myItemPinInput");
        myItemPinInput->setGeometry(QRect(170, 150, 141, 31));
        myItemPinInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: #1E293B;\n"
"    background-color: white;\n"
"    border: 1px solid #CBD5E1;\n"
"    border-radius: 5px;\n"
"    padding: 7px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #0284C7;\n"
"}"));
        myItemPinInput->setEchoMode(QLineEdit::EchoMode::Password);
        findMyItemButton = new QPushButton(myItemsPage);
        findMyItemButton->setObjectName("findMyItemButton");
        findMyItemButton->setGeometry(QRect(110, 200, 101, 31));
        QPalette palette28;
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette28.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette28.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette28.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        findMyItemButton->setPalette(palette28);
        myItemDetailsLabel = new QLabel(myItemsPage);
        myItemDetailsLabel->setObjectName("myItemDetailsLabel");
        myItemDetailsLabel->setGeometry(QRect(30, 260, 331, 211));
        myItemDetailsLabel->setMinimumSize(QSize(300, 100));
        QPalette palette29;
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette29.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette29.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette29.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        myItemDetailsLabel->setPalette(palette29);
        myItemDetailsLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        myItemDetailsLabel->setWordWrap(true);
        myItemUpdateButton = new QPushButton(myItemsPage);
        myItemUpdateButton->setObjectName("myItemUpdateButton");
        myItemUpdateButton->setGeometry(QRect(369, 280, 121, 41));
        QPalette palette30;
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette30.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette30.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette30.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        myItemUpdateButton->setPalette(palette30);
        myItemUpdateButton->setFont(font1);
        myItemDeleteButton = new QPushButton(myItemsPage);
        myItemDeleteButton->setObjectName("myItemDeleteButton");
        myItemDeleteButton->setGeometry(QRect(370, 330, 121, 41));
        QPalette palette31;
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette31.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette31.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette31.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        myItemDeleteButton->setPalette(palette31);
        myItemDeleteButton->setFont(font1);
        togglePinVisibilityButton = new QPushButton(myItemsPage);
        togglePinVisibilityButton->setObjectName("togglePinVisibilityButton");
        togglePinVisibilityButton->setGeometry(QRect(310, 150, 51, 31));
        QPalette palette32;
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette32.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette32.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette32.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        togglePinVisibilityButton->setPalette(palette32);
        stackedWidget->addWidget(myItemsPage);
        adminOverviewPage = new QWidget();
        adminOverviewPage->setObjectName("adminOverviewPage");
        adminOverviewHeading = new QLabel(adminOverviewPage);
        adminOverviewHeading->setObjectName("adminOverviewHeading");
        adminOverviewHeading->setGeometry(QRect(30, 30, 131, 51));
        QPalette palette33;
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette33.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette33.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette33.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        adminOverviewHeading->setPalette(palette33);
        adminOverviewHeading->setFont(font1);
        adminOverviewHeading->setAlignment(Qt::AlignmentFlag::AlignCenter);
        totalItemsLabel = new QLabel(adminOverviewPage);
        totalItemsLabel->setObjectName("totalItemsLabel");
        totalItemsLabel->setGeometry(QRect(30, 110, 121, 31));
        QPalette palette34;
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette34.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette34.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette34.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        totalItemsLabel->setPalette(palette34);
        totalItemsLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        totalItemsValue = new QLabel(adminOverviewPage);
        totalItemsValue->setObjectName("totalItemsValue");
        totalItemsValue->setGeometry(QRect(180, 110, 131, 31));
        QPalette palette35;
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette35.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette35.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette35.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        totalItemsValue->setPalette(palette35);
        lostItemsLabel = new QLabel(adminOverviewPage);
        lostItemsLabel->setObjectName("lostItemsLabel");
        lostItemsLabel->setGeometry(QRect(30, 150, 121, 31));
        QPalette palette36;
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette36.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette36.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette36.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        lostItemsLabel->setPalette(palette36);
        lostItemsLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        foundItemsLabel = new QLabel(adminOverviewPage);
        foundItemsLabel->setObjectName("foundItemsLabel");
        foundItemsLabel->setGeometry(QRect(30, 190, 121, 31));
        QPalette palette37;
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette37.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette37.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette37.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        foundItemsLabel->setPalette(palette37);
        foundItemsLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lostItemsValue = new QLabel(adminOverviewPage);
        lostItemsValue->setObjectName("lostItemsValue");
        lostItemsValue->setGeometry(QRect(180, 150, 131, 31));
        QPalette palette38;
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette38.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette38.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette38.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        lostItemsValue->setPalette(palette38);
        foundItemsValue = new QLabel(adminOverviewPage);
        foundItemsValue->setObjectName("foundItemsValue");
        foundItemsValue->setGeometry(QRect(180, 190, 131, 31));
        QPalette palette39;
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette39.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette39.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette39.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        foundItemsValue->setPalette(palette39);
        collectedItemsLabel = new QLabel(adminOverviewPage);
        collectedItemsLabel->setObjectName("collectedItemsLabel");
        collectedItemsLabel->setGeometry(QRect(30, 230, 121, 31));
        QPalette palette40;
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette40.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette40.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette40.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        collectedItemsLabel->setPalette(palette40);
        collectedItemsLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        collectedItemsValue = new QLabel(adminOverviewPage);
        collectedItemsValue->setObjectName("collectedItemsValue");
        collectedItemsValue->setGeometry(QRect(180, 230, 131, 31));
        QPalette palette41;
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette41.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette41.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette41.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        collectedItemsValue->setPalette(palette41);
        logoutButton = new QPushButton(adminOverviewPage);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(110, 290, 111, 31));
        QPalette palette42;
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette42.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette42.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette42.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        logoutButton->setPalette(palette42);
        stackedWidget->addWidget(adminOverviewPage);
        myItemsButton = new QPushButton(centralwidget);
        myItemsButton->setObjectName("myItemsButton");
        myItemsButton->setGeometry(QRect(10, 220, 161, 41));
        myItemsButton->setFont(font4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1100, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Campus Lost and Found", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Campus Lost and Found", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "A smart Campus Item Recovery System", nullptr));
        adminbutton->setText(QCoreApplication::translate("MainWindow", "Admin Overview", nullptr));
        manageItemButton->setText(QCoreApplication::translate("MainWindow", "Manage Item", nullptr));
        SearchItembutton->setText(QCoreApplication::translate("MainWindow", "Search Items", nullptr));
        addItemButton->setText(QCoreApplication::translate("MainWindow", "Add Item", nullptr));
        matchesbutton->setText(QCoreApplication::translate("MainWindow", "Potential Matches", nullptr));
        manageItemHeading->setText(QCoreApplication::translate("MainWindow", "Manage Items", nullptr));
        QTableWidgetItem *___qtablewidgetitem = manageItemsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = manageItemsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = manageItemsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Colour", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = manageItemsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Location", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = manageItemsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Day", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = manageItemsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = manageItemsTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        updateItemButton->setText(QCoreApplication::translate("MainWindow", "Update Item", nullptr));
        deleteItemButton->setText(QCoreApplication::translate("MainWindow", "Delete Item", nullptr));
        matchesHeading->setText(QCoreApplication::translate("MainWindow", "Potential Matches", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = matchesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Lost Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = matchesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Found Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = matchesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "Colour", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = matchesTable->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "Location", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = matchesTable->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "Match Status", nullptr));
        addItemHeading->setText(QCoreApplication::translate("MainWindow", "Add a lost or Found item", nullptr));
        itemNameLabel->setText(QCoreApplication::translate("MainWindow", "Item Name", nullptr));
        itemNameInput->setText(QString());
        itemNameInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Item Name", nullptr));
        itemColorLabel->setText(QCoreApplication::translate("MainWindow", "Colour", nullptr));
        itemColorInput->setText(QString());
        itemColorInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "e.g. Black", nullptr));
        itemLocationLabel->setText(QCoreApplication::translate("MainWindow", "Location", nullptr));
        itemLocationInput->setText(QString());
        itemLocationInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "e.g. Library, Cafeteria, Room 302", nullptr));
        itemDayInput->setText(QString());
        itemDayInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "e.g. Monday", nullptr));
        itemDayLabel->setText(QCoreApplication::translate("MainWindow", "Day", nullptr));
        itemDateInput->setDisplayFormat(QCoreApplication::translate("MainWindow", "dd/MM/yyyy", nullptr));
        itemDateLabel->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        itemStatusLabel->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        itemStatusInput->setItemText(0, QCoreApplication::translate("MainWindow", "Lost", nullptr));
        itemStatusInput->setItemText(1, QCoreApplication::translate("MainWindow", "Found", nullptr));

        submitItemButton->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        searchItemsHeading->setText(QCoreApplication::translate("MainWindow", "	Search Items", nullptr));
        searchIdLabel->setText(QCoreApplication::translate("MainWindow", "Enter Item ID", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        searchResultLabel->setText(QCoreApplication::translate("MainWindow", "Search results will appear here.", nullptr));
        myItemsHeading->setText(QCoreApplication::translate("MainWindow", "My Items", nullptr));
        myItemPinLabel->setText(QCoreApplication::translate("MainWindow", "Management PIN:", nullptr));
        myItemIdLabel->setText(QCoreApplication::translate("MainWindow", "Item ID:", nullptr));
        myItemIdInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter your Item ID", nullptr));
        myItemPinInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter your PIN", nullptr));
        findMyItemButton->setText(QCoreApplication::translate("MainWindow", "Find My Item", nullptr));
        myItemDetailsLabel->setText(QCoreApplication::translate("MainWindow", "Item details will appear here", nullptr));
        myItemUpdateButton->setText(QCoreApplication::translate("MainWindow", "Update Item", nullptr));
        myItemDeleteButton->setText(QCoreApplication::translate("MainWindow", "Delete Item", nullptr));
        togglePinVisibilityButton->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        adminOverviewHeading->setText(QCoreApplication::translate("MainWindow", "	Admin Overview", nullptr));
        totalItemsLabel->setText(QCoreApplication::translate("MainWindow", "Total Items", nullptr));
        totalItemsValue->setText(QCoreApplication::translate("MainWindow", " 0", nullptr));
        lostItemsLabel->setText(QCoreApplication::translate("MainWindow", "Lost Items", nullptr));
        foundItemsLabel->setText(QCoreApplication::translate("MainWindow", "Found Items", nullptr));
        lostItemsValue->setText(QCoreApplication::translate("MainWindow", " 0", nullptr));
        foundItemsValue->setText(QCoreApplication::translate("MainWindow", " 0", nullptr));
        collectedItemsLabel->setText(QCoreApplication::translate("MainWindow", "Collected Items", nullptr));
        collectedItemsValue->setText(QCoreApplication::translate("MainWindow", " 0", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        myItemsButton->setText(QCoreApplication::translate("MainWindow", "My Items", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
