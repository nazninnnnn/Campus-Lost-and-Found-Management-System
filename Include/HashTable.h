
#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include "Item.h"

using namespace std;

class HashTable {

private:

    static const int TABLE_SIZE = 10;

    struct HashNode {
        Item* data;
        HashNode* next;

        HashNode(Item* item) {
            data = item;
            next = nullptr;
        }
    };

    HashNode* table[TABLE_SIZE];

    // Hash function
    int hashFunction(int id) {
        return id % TABLE_SIZE;
    }

public:

    // Constructor
    HashTable() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            table[i] = nullptr;
        }
    }

    // Insert item into hash table
    void insert(Item* item) {

        int index = hashFunction(item->id);

        HashNode* newNode = new HashNode(item);

        newNode->next = table[index];
        table[index] = newNode;
    }

    // Search item by ID
    Item* search(int id) {

        int index = hashFunction(id);

        HashNode* temp = table[index];

        while (temp != nullptr) {

            if (temp->data->id == id) {
                return temp->data;
            }

            temp = temp->next;
        }

        return nullptr;
    }

    // Remove item from hash table
    void remove(int id) {

        int index = hashFunction(id);

        HashNode* temp = table[index];
        HashNode* previous = nullptr;

        while (temp != nullptr) {

            if (temp->data->id == id) {

                if (previous == nullptr) {
                    table[index] = temp->next;
                }
                else {
                    previous->next = temp->next;
                }

                delete temp;

                return;
            }

            previous = temp;
            temp = temp->next;
        }
    }

    // Destructor
    ~HashTable() {

        for (int i = 0; i < TABLE_SIZE; i++) {

            HashNode* temp = table[i];

            while (temp != nullptr) {

                HashNode* nextNode = temp->next;

                delete temp;

                temp = nextNode;
            }
        }
    }
};

#endif
