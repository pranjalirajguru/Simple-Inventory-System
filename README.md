📦 Simple Inventory Management System (C++ - Linked List)
📌 Project Description

This is a menu-driven Inventory Management System implemented in C++ using a Linked List.
The system allows users to:

Add new inventory items (name, quantity, price)

Update existing items

Remove items from the inventory

Display the current inventory in a table format

It demonstrates basic C++ programming skills, data structures (linked lists), and user input handling.

⚙️ Features

Add Item → Insert new inventory items at the beginning of the linked list.

Update Item → Search by name and modify its quantity and price.

Remove Item → Delete an item from the linked list by name.

Display Inventory → Show all items in a neatly formatted table.

Memory Management → Uses dynamic memory (new/delete) with a cleanup function.

🛠️ Skills Demonstrated

C++ fundamentals (structs, pointers, loops, functions)

Linked List implementation (dynamic data structure)

Menu-driven user interface (console-based)

Input validation basics

Proper memory handling

📂 File Structure
InventorySystem/
│── inventory.cpp     # Main program (C++ source code)
│── README.md         # Project documentation

▶️ How to Compile & Run
On Linux / macOS (g++)
g++ inventory.cpp -o inventory
./inventory

On Windows (MinGW)
g++ inventory.cpp -o inventory.exe
inventory.exe

📋 Example Run
===== Simple Inventory System (Linked List) =====
1. Add Item
2. Update Item
3. Remove Item
4. Display Inventory
5. Exit
Enter your choice: 1
Enter item name: Pen
Enter quantity: 20
Enter price: 10.5
Item added successfully!

===== Simple Inventory System (Linked List) =====
4
Current Inventory:
Name            Quantity  Price     
---------------------------------
Pen             20        10.50

🚀 Future Improvements

Save/load inventory data to a file for persistence.

Add search by multiple attributes (e.g., price range).

Add sorting options (e.g., by name, quantity, price).

Add input validation for incorrect entries.
