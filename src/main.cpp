
#include <iostream>
#include <limits>
#include "../Include/LinkedList.h"
#include "../Include/HashTable.h"

using namespace std;

int main() {

    LinkedList items;
    HashTable itemTable;

    int choice;

    do {

        cout << "\n================================\n";
        cout << "     CAMPUS LOST AND FOUND\n";
        cout << "================================\n";

        cout << "1. Add Item\n";
        cout << "2. Search Item\n";
        cout << "3. Update Item\n";
        cout << "4. Delete Item\n";
        cout << "5. Display All Items\n";
        cout << "6. Find Potential Matches\n";
        cout << "0. Exit\n";

        cout << "\nEnter your choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input. Enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {

            case 1: {
                Item* newItem = items.addItem();
                itemTable.insert(newItem);
                break;
            }

            
case 2: {
    int id;

    while (true) {
        cout << "\nEnter Item ID to search: ";

        if (cin >> id) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }

        cout << "\nInvalid Item ID. Please enter a number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    Item* foundItem = itemTable.search(id);

    if (foundItem != nullptr) {

        cout << "\n========== ITEM FOUND ==========\n";
        cout << "ID: " << foundItem->id << "\n";
        cout << "Name: " << foundItem->name << "\n";
        cout << "Color: " << foundItem->color << "\n";
        cout << "Location: " << foundItem->location << "\n";
        cout << "Day: " << foundItem->day << "\n";
        cout << "Date: " << foundItem->date << "\n";
        cout << "Status: " << foundItem->status << "\n";

    }
    else {
        cout << "\nItem not found!\n";
    }

    break;
}


        
case 3: {
    int id;

    while (true) {
        cout << "\nEnter Item ID to update: ";

        if (cin >> id) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }

        cout << "\nInvalid Item ID. Please enter a number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    items.updateItem(id);

    break;
}


            

case 4: {
    int id;
    char confirm;

    while (true) {
        cout << "\nEnter Item ID to delete: ";

        if (cin >> id) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }

        cout << "\nInvalid Item ID. Please enter a number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    if (itemTable.search(id) != nullptr) {

        cout << "\nAre you sure you want to delete this item? (Y/N): ";
        cin >> confirm;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (confirm == 'Y' || confirm == 'y') {

            itemTable.remove(id);
            items.deleteItem(id);

        }
        else {
            cout << "\nDeletion cancelled.\n";
        }

    }
    else {
        cout << "\nItem ID not found!\n";
    }

    break;
}



            case 5:
                items.displayAll();
                break;

           case 6:
    items.findPotentialMatches();
    break;

            case 0:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
