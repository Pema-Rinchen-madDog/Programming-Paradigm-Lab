#include <iostream>
#include <iomanip>  // Include the <iomanip> library for formatting

using namespace std;

const int MAX_ITEMS = 100;  // Maximum number of items in the shopping list

class Item {
public:
    int itemCode;
    string itemName;
    double itemPrice;

    Item() {}

    Item(int code, string name, double price) {
        itemCode = code;
        itemName = name;
        itemPrice = price;
    }
};

class ShoppingList {
private:
    Item items[MAX_ITEMS];
    int itemCount;
    double totalValue;

public:
    ShoppingList() {
        itemCount = 0;
        totalValue = 0;
    }

    void addItem(int code, string name, double price) {
        if (itemCount < MAX_ITEMS) {
            Item newItem(code, name, price);
            items[itemCount++] = newItem;
            cout << name << " added to the list." << endl;
        } else {
            cout << "The shopping list is full. Cannot add more items." << endl;
        }
    }

    void deleteItem(int code) {
        for (int i = 0; i < itemCount; ++i) {
            if (items[i].itemCode == code) {
                cout << items[i].itemName << " removed from the list." << endl;
                totalValue -= items[i].itemPrice;
                for (int j = i; j < itemCount - 1; ++j) {
                    items[j] = items[j + 1];
                }
                itemCount--;
                break;
            }
        }
    }

    void printTotalValue() {
        cout << "Items in the shopping list:" << endl;

        // Print table header
        cout << setw(10) << "Code" << setw(20) << "Name" << setw(10) << "Price" << endl;
        cout << "----------------------------------------" << endl;

        for (int i = 0; i < itemCount; ++i) {
            // Print items in a tabular form
            cout << setw(10) << items[i].itemCode << setw(20) << items[i].itemName
                 << setw(10) << "$" << items[i].itemPrice << endl;
            totalValue += items[i].itemPrice;
        }
        cout << "----------------------------------------" << endl;
        cout << "Total value of the order: $" << totalValue << endl;
    }
};
int main() {
    ShoppingList myList;

    while (true) {
        cout << "1. Add item\n2. Delete item\n3. Print total value\n4. Exit\n";
        int choice;
        cin >> choice;

        if (choice == 1) {
            int code;
            string name;
            double price;
            cout << "Enter item code: ";
            cin >> code;
            cout << "Enter item name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter item price: $";
            cin >> price;
            myList.addItem(code, name, price);
        } else if (choice == 2) {
            int code;
            cout << "Enter item code to delete: ";
            cin >> code;
            myList.deleteItem(code);
        } else if (choice == 3) {
            myList.printTotalValue();
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

