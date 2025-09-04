#include <iostream>
#include <iomanip> // for formatting
using namespace std;

// Structure for inventory item
struct Item {
    string name;
    int quantity;
    double price;
    Item* next; // pointer to the next item
};

// Function prototypes
void addItem(Item*& head);
void updateItem(Item* head);
void removeItem(Item*& head);
void displayInventory(Item* head);
void freeMemory(Item*& head);

int main() {
    Item* head = nullptr; // start with empty inventory
    int choice;

    do {
        cout << "\n===== Simple Inventory System (Linked List) =====\n";
        cout << "1. Add Item\n";
        cout << "2. Update Item\n";
        cout << "3. Remove Item\n";
        cout << "4. Display Inventory\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addItem(head); break;
            case 2: updateItem(head); break;
            case 3: removeItem(head); break;
            case 4: displayInventory(head); break;
            case 5: cout << "Exiting... Goodbye!\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    freeMemory(head); // cleanup memory
    return 0;
}

// Function to add a new item
void addItem(Item*& head) {
    Item* newItem = new Item;
    cout << "Enter item name: ";
    cin >> newItem->name;
    cout << "Enter quantity: ";
    cin >> newItem->quantity;
    cout << "Enter price: ";
    cin >> newItem->price;

    newItem->next = head;
    head = newItem;

    cout << "Item added successfully!\n";
}

// Function to update an existing item
void updateItem(Item* head) {
    if (!head) {
        cout << "Inventory is empty!\n";
        return;
    }

    string name;
    cout << "Enter the name of the item to update: ";
    cin >> name;

    Item* temp = head;
    while (temp) {
        if (temp->name == name) {
            cout << "Enter new quantity: ";
            cin >> temp->quantity;
            cout << "Enter new price: ";
            cin >> temp->price;
            cout << "Item updated successfully!\n";
            return;
        }
        temp = temp->next;
    }
    cout << "Item not found!\n";
}

// Function to remove an item
void removeItem(Item*& head) {
    if (!head) {
        cout << "Inventory is empty!\n";
        return;
    }

    string name;
    cout << "Enter the name of the item to remove: ";
    cin >> name;

    Item* temp = head;
    Item* prev = nullptr;

    while (temp) {
        if (temp->name == name) {
            if (prev) {
                prev->next = temp->next;
            } else {
                head = temp->next;
            }
            delete temp;
            cout << "Item removed successfully!\n";
            return;
        }
        prev = temp;
        temp = temp->next;
    }

    cout << "Item not found!\n";
}

// Function to display inventory
void displayInventory(Item* head) {
    if (!head) {
        cout << "Inventory is empty!\n";
        return;
    }

    cout << "\nCurrent Inventory:\n";
    cout << left << setw(15) << "Name" 
         << setw(10) << "Quantity" 
         << setw(10) << "Price" << endl;
    cout << "---------------------------------\n";

    Item* temp = head;
    while (temp) {
        cout << left << setw(15) << temp->name
             << setw(10) << temp->quantity
             << setw(10) << fixed << setprecision(2) << temp->price
             << endl;
        temp = temp->next;
    }
}

// Function to free allocated memory
void freeMemory(Item*& head) {
    while (head) {
        Item* temp = head;
        head = head->next;
        delete temp;
    }
}
