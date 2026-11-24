
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "../Include/LinkedList.h"
#include "../Include/HashTable.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
    QString dataFilePath;
    void saveItems();
    bool isAdminLoggedIn = false;

    // Backend data structures
    LinkedList items;
    HashTable itemTable;
    Item* currentUserItem = nullptr;
    bool isUpdatingMyItem = false;
    void refreshManageItemsTable();

    void refreshPotentialMatchesTable();
    void showSuccessMessage(const QString &message);

    bool showAdminLogin();
};

#endif // MAINWINDOW_H
