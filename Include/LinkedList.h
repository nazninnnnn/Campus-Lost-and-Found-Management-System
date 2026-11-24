
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <string>
#include <cctype>
#include "Item.h"
#include <fstream>
#include <iomanip>

class LinkedList {

private:

    struct Node {
        Item data;
        Node* next;

        Node(Item item) {
            data = item;
            next = nullptr;
        }
    };

    Node* head;
    int nextId;

    // Convert text to lowercase for comparison
std::string toLower(std::string text) {

    for (char &ch : text) {
        ch = std::tolower(static_cast<unsigned char>(ch));
    }

    return text;
}

public:

    // Constructor
    LinkedList() {
        head = nullptr;
        nextId = 1001;
    }


    // Add a new item from the GUI
 

Item* addItem(const std::string& name,
              const std::string& color,
              const std::string& location,
              const std::string& day,
              const std::string& date,
              const std::string& status,
              const std::string& managementPin)
{
    Item newItem;

    newItem.id = nextId++;
    newItem.name = name;
    newItem.color = color;
    newItem.location = location;
    newItem.day = day;
    newItem.date = date;
    newItem.status = status;
    newItem.managementPin = managementPin;

    Node* newNode = new Node(newItem);

    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node* temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    return &newNode->data;
}




    // Add a new item
    Item* addItem() {

        Item newItem;
        newItem.id = nextId;

        std::cout << "\n--- ADD NEW ITEM ---\n";

        std::cout << "Enter item name: ";
        std::getline(std::cin, newItem.name);

        std::cout << "Enter color: ";
        std::getline(std::cin, newItem.color);

        std::cout << "Enter location: ";
        std::getline(std::cin, newItem.location);

        std::cout << "Enter day (e.g. Monday): ";
        std::getline(std::cin, newItem.day);

        std::cout << "Enter date (DD-MM-YYYY): ";
        std::getline(std::cin, newItem.date);

        std::cout << "Enter status (Lost/Found): ";
        std::getline(std::cin, newItem.status);

        Node* newNode = new Node(newItem);

        if (head == nullptr) {
            head = newNode;
        }
        else {
            Node* temp = head;

            while (temp->next != nullptr) {
                temp = temp->next;
            }

            temp->next = newNode;
        }

        std::cout << "\nItem added successfully!";
        std::cout << "\nAssigned Item ID: " << nextId << "\n";

        nextId++;

        return &newNode->data;
    }

    // Update an existing item
    

    // Update the status of an existing item
    void updateItem(int id) {

        Node* temp = head;

        // Find the selected item
        while (temp != nullptr && temp->data.id != id) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            std::cout << "\nItem ID not found!\n";
            return;
        }

        // Display selected item details
        std::cout << "\n--- UPDATE ITEM ---\n";
        std::cout << "\nItem Found!";
        std::cout << "\nID: " << temp->data.id;
        std::cout << "\nName: " << temp->data.name;
        std::cout << "\nColor: " << temp->data.color;
        std::cout << "\nLocation: " << temp->data.location;
        std::cout << "\nDay: " << temp->data.day;
        std::cout << "\nDate: " << temp->data.date;
        std::cout << "\nCurrent Status: " << temp->data.status;

        // Find a matching item with the opposite status
        Node* match = nullptr;
        std::string currentStatus = toLower(temp->data.status);
        std::string oppositeStatus;

        if (currentStatus == "lost") {
            oppositeStatus = "found";
        }
        else if (currentStatus == "found") {
            oppositeStatus = "lost";
        }

        Node* current = head;

        while (current != nullptr) {

            if (current != temp &&
                toLower(current->data.status) == oppositeStatus &&
                toLower(current->data.name) == toLower(temp->data.name) &&
                toLower(current->data.color) == toLower(temp->data.color)) {

                match = current;
                break;
            }

            current = current->next;
        }

        // If a matching item exists
        if (match != nullptr) {

            std::cout << "\n\nMatching Item Found!";
            std::cout << "\nID: " << match->data.id;
            std::cout << "\nName: " << match->data.name;
            std::cout << "\nColor: " << match->data.color;
            std::cout << "\nCurrent Status: " << match->data.status;

            std::string choice;

            std::cout << "\n\nMark both items as Collected? (yes/no): ";
            std::getline(std::cin, choice);

            if (toLower(choice) == "yes" || toLower(choice) == "y") {

                temp->data.status = "Collected";
                match->data.status = "Collected";

                std::cout << "\nBoth items marked as Collected!\n";
            }
            else {
                std::cout << "\nNo changes made.\n";
            }

            return;
        }

        // If no matching item exists
        std::string input;

        std::cout << "\n\nEnter new status (Lost/Found/Collected): ";
        std::getline(std::cin, input);

        if (!input.empty()) {
            temp->data.status = input;
            std::cout << "\nItem status updated successfully!\n";
        }
        else {
            std::cout << "\nNo changes made.\n";
        }
    }



// Delete an item from linked list
void deleteItem(int id) {

    Node* temp = head;
    Node* previous = nullptr;

    while (temp != nullptr) {

        if (temp->data.id == id) {

            if (previous == nullptr) {
                head = temp->next;
            }
            else {
                previous->next = temp->next;
            }

            delete temp;

            std::cout << "\nItem deleted successfully!\n";

            return;
        }

        previous = temp;
        temp = temp->next;
    }

    std::cout << "\nItem ID not found!\n";
}

// Visit all items for the GUI
template <typename Function>
void forEachItem(Function function) {

    Node* temp = head;

    while (temp != nullptr) {
        function(&temp->data);
        temp = temp->next;
    }
}

    // Display all items
    void displayAll() {

        if (head == nullptr) {
            std::cout << "\nNo items found.\n";
            return;
        }

        Node* temp = head;

        std::cout << "\n========== ALL ITEMS ==========\n";

        while (temp != nullptr) {

            std::cout << "\nItem ID: " << temp->data.id;
            std::cout << "\nName: " << temp->data.name;
            std::cout << "\nColor: " << temp->data.color;
            std::cout << "\nLocation: " << temp->data.location;
            std::cout << "\nDay: " << temp->data.day;
            std::cout << "\nDate: " << temp->data.date;
            std::cout << "\nStatus: " << temp->data.status;

            std::cout << "\n------------------------------\n";

            temp = temp->next;
        }
    }

    // Find potential matches between Lost and Found items
void findPotentialMatches() {

    Node* lost = head;
    bool matchFound = false;

    std::cout << "\n========== POTENTIAL MATCHES ==========\n";

    while (lost != nullptr) {

        // Check whether the current item is Lost
        if (toLower(lost->data.status) == "lost") {

            Node* found = head;

            while (found != nullptr) {

                // Check whether the other item is Found
                if (toLower(found->data.status) == "found") {

                    // Compare item name and color
                    if (toLower(lost->data.name) == toLower(found->data.name) &&
                        toLower(lost->data.color) == toLower(found->data.color)) {

                        matchFound = true;

                        std::cout << "\nPossible Match Found!\n";

                        std::cout << "\nLost Item:";
                        std::cout << "\nID: " << lost->data.id;
                        std::cout << "\nName: " << lost->data.name;
                        std::cout << "\nColor: " << lost->data.color;
                        std::cout << "\nLocation: " << lost->data.location;

                        std::cout << "\n\nFound Item:";
                        std::cout << "\nID: " << found->data.id;
                        std::cout << "\nName: " << found->data.name;
                        std::cout << "\nColor: " << found->data.color;
                        std::cout << "\nLocation: " << found->data.location;

                        std::cout << "\n-----------------------------------\n";
                    }
                }

                found = found->next;
            }
        }

        lost = lost->next;
    }

    if (!matchFound) {
        std::cout << "\nNo potential matches found.\n";
    }
}


    // Find potential matches for the GUI
    template <typename Function>
    void forEachMatch(Function function) {

        Node* lost = head;

        while (lost != nullptr) {

            if (toLower(lost->data.status) == "lost") {

                Node* found = head;

                while (found != nullptr) {

                    if (toLower(found->data.status) == "found" &&
                        toLower(lost->data.name) == toLower(found->data.name) &&
                        toLower(lost->data.color) == toLower(found->data.color)) {

                        function(&lost->data, &found->data);
                    }

                    found = found->next;
                }
            }

            lost = lost->next;
        }
    }

    // Save all items to a file
bool saveToFile(const std::string& filename) {

    std::ofstream file(filename);

    if (!file.is_open())
        return false;

    Node* temp = head;

    while (temp != nullptr) {

        Item* item = &temp->data;

        file << item->id << " "
             << std::quoted(item->name) << " "
             << std::quoted(item->color) << " "
             << std::quoted(item->location) << " "
             << std::quoted(item->day) << " "
             << std::quoted(item->date) << " "
             << std::quoted(item->status) << " "
             << std::quoted(item->managementPin) << "\n";

        temp = temp->next;
    }

    file.close();
    return true;
}


// Load items from a file
bool loadFromFile(const std::string& filename) {

    std::ifstream file(filename);

    if (!file.is_open())
        return false;

    Item item;
    Node* tail = head;

    while (tail != nullptr && tail->next != nullptr)
        tail = tail->next;

    while (file >> item.id
                >> std::quoted(item.name)
                >> std::quoted(item.color)
                >> std::quoted(item.location)
                >> std::quoted(item.day)
                >> std::quoted(item.date)
                >> std::quoted(item.status)
                >> std::quoted(item.managementPin)) {

        Node* newNode = new Node(item);

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }

        if (item.id >= nextId)
            nextId = item.id + 1;
    }

    file.close();
    return true;
}

    // Destructor
    ~LinkedList() {

        Node* temp = head;

        while (temp != nullptr) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
    }
};

#endif
