/*
// Shoe Shop Order System
// Objective: Create a system that accepts multiple orders in a shoe shop, computes the total, and can reset for the next customer
// Instructions: 1: Input Orders: Allow the user to input multiple shoe orders with their respective prices.
// 2: Compute Total: Compute the total of all the orders.
// 3: Reset: Allow the user to reset the system for the next customer.
// 4: Exit: Allow the user to exit the system.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    while (true) { // Loop for multiple customers
        const int maxOrders = 100; // Maximum number of orders allowed
        string shoeOrders[maxOrders]; // Array to store shoe names
        double shoePrices[maxOrders]; // Array to store shoe prices
        int orderCount = 0; // Tracks the number of orders
        double total = 0.0;
        string shoeName;
        double shoePrice;
		char choice; // User choice to reset or exit

        cout << "Welcome to the Shoe Shop Order System!" << endl;

        // Input Orders
        while (true) {
            if (orderCount >= maxOrders) {
                cout << "Maximum orders reached!" << endl;
                break;
            }

            cout << "Enter the name of the shoe (or type 'done' to finish): ";
            cin >> shoeName;
            if (shoeName == "done") break;

            cout << "Enter the price of the shoe: ";
            cin >> shoePrice;

            shoeOrders[orderCount] = shoeName;
            shoePrices[orderCount] = shoePrice;
            total += shoePrice;
            orderCount++;
        }

        // Display Total
        cout << "\nOrder Summary:" << endl;
        for (int i = 0; i < orderCount; ++i) {  
            cout << i + 1 << ". " << shoeOrders[i] << " - $" << shoePrices[i] << endl;
        }
        cout << "Total: $" << total << endl;

        // Reset or Exit
        cout << "\nOptions:\n";
        cout << "1. Reset for next customer\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == '2') {
            cout << "Thank you for using the Shoe Shop Order System. Goodbye!" << endl;
            break;
        }

        cout << "\nSystem reset for the next customer.\n\n";
    }

    return 0;
}
