#include <iostream>
#include <string>
using namespace std;

// Define the InventoryItem class
class InventoryItem
{
private:
    int itemID;
    string itemName;
    double itemPrice;

public:
    // Constructor to initialize the object
    InventoryItem(int id = 0, string name = "", double price = 0.0)
    {
        itemID = id;
        itemName = name;
        itemPrice = price;
    }

    // Getter methods
    int getItemID() const { return itemID; }
    string getItemName() const { return itemName; }
    double getItemPrice() const { return itemPrice; }

    // Setter methods
    void setItemID(int id) { itemID = id; }
    void setItemName(const string &name) { itemName = name; }
    void setItemPrice(double price) { itemPrice = price; }

    // Display method to print item details
    void displayItem() const
    {
        cout << "Item ID: " << itemID << endl;
        cout << "Item Name: " << itemName << endl;
        cout << "Item Price: $" << itemPrice << endl;
    }
};

// Function prototypes
void addItem(InventoryItem *inventory, int &currentSize, int maxSize);
void updateItem(InventoryItem *inventory, int currentSize);
void displayItemByID(InventoryItem *inventory, int currentSize);
void listAllItems(InventoryItem *inventory, int currentSize);

// Main function
int main()
{
    int maxSize;

    // Step 2: Declare an array of InventoryItem objects
    cout << "Enter the number of items the inventory can hold: ";
    cin >> maxSize;

    if (maxSize <= 0)
    {
        cout << "Invalid size. Program exiting." << endl;
        return 0;
    }

    InventoryItem *inventory = new InventoryItem[maxSize];
    int currentSize = 0;

    // Step 3: Create a menu system
    int choice;
    do
    {
        cout << "\n--- Inventory Management Menu ---\n";
        cout << "1. Add a new item\n";
        cout << "2. Update an existing item\n";
        cout << "3. Display an item by ID\n";
        cout << "4. List all items\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addItem(inventory, currentSize, maxSize);
            break;
        case 2:
            updateItem(inventory, currentSize);
            break;
        case 3:
            displayItemByID(inventory, currentSize);
            break;
        case 4:
            listAllItems(inventory, currentSize);
            break;
        case 5:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    // Deallocate the memory for inventory
    delete[] inventory;

    return 0;
}

// Function to add a new item to the inventory
void addItem(InventoryItem *inventory, int &currentSize, int maxSize)
{
    if (currentSize >= maxSize)
    {
        cout << "Inventory is full. Cannot add more items." << endl;
        return;
    }

    int id;
    string name;
    double price;

    cout << "Enter Item ID: ";
    cin >> id;
    cout << "Enter Item Name: ";
    cin.ignore(); // Ignore newline character from previous input
    getline(cin, name);
    cout << "Enter Item Price: ";
    cin >> price;

    // Add the new item to the array
    inventory[currentSize].setItemID(id);
    inventory[currentSize].setItemName(name);
    inventory[currentSize].setItemPrice(price);

    currentSize++;
    cout << "Item added successfully!" << endl;
}

// Function to update an existing item's details
void updateItem(InventoryItem *inventory, int currentSize)
{
    if (currentSize == 0)
    {
        cout << "No items in the inventory to update." << endl;
        return;
    }

    int id;
    cout << "Enter the Item ID to update: ";
    cin >> id;

    for (int i = 0; i < currentSize; i++)
    {
        if (inventory[i].getItemID() == id)
        {
            string newName;
            double newPrice;

            cout << "Enter new Item Name: ";
            cin.ignore(); // Ignore newline character
            getline(cin, newName);
            cout << "Enter new Item Price: ";
            cin >> newPrice;

            // Update the item's details
            inventory[i].setItemName(newName);
            inventory[i].setItemPrice(newPrice);

            cout << "Item updated successfully!" << endl;
            return;
        }
    }

    cout << "Item with ID " << id << " not found." << endl;
}

// Function to display an item given its Item ID
void displayItemByID(InventoryItem *inventory, int currentSize)
{
    if (currentSize == 0)
    {
        cout << "No items in the inventory." << endl;
        return;
    }

    int id;
    cout << "Enter the Item ID: ";
    cin >> id;

    for (int i = 0; i < currentSize; i++)
    {
        if (inventory[i].getItemID() == id)
        {
            inventory[i].displayItem();
            return;
        }
    }

    cout << "Item with ID " << id << " not found." << endl;
}

// Function to list all items in the inventory
void listAllItems(InventoryItem *inventory, int currentSize)
{
    if (currentSize == 0)
    {
        cout << "No items in the inventory." << endl;
        return;
    }

    cout << "\n--- Inventory List ---\n";
    for (int i = 0; i < currentSize; i++)
    {
        inventory[i].displayItem();
        cout << "----------------------\n";
    }
}
