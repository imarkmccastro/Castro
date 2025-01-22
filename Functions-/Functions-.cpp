#include <cstring>
#include <iostream>
using namespace std;

/*
The program will prompt the user to choose the
operation choice (from 1 to 5). Then it asks the user to input two integer vales for the calculation
*/

//Function to calculate the sum of two numbers

int sum(int a, int b) {
    return a + b; // Returns the sum of two numbers.
}

//Function to calculate the difference of two numbers
int difference(int a, int b) {
    return a - b;
}

//Function to calculate the product of two numbers
int product(int a, int b) {
    return a * b;
}

//Function to calculate the quotient of two numbers
int quotient(int a, int b) {
    return a / b;
}

//Function to calculate the remainder of two numbers
int remainder(int a, int b) {
    return a % b;
}


int main() {

    char continueSystem = 'Y';

    while (continueSystem == 'Y' || continueSystem == 'y') {
        int choice, a, b;
        cout << "**********************************************\n";
        cout << "*               CALCULATOR MENU              *\n";
        cout << "**********************************************\n";
        cout << "*  1. Add                                    *\n";
        cout << "*  2. Subtract                               *\n";
        cout << "*  3. Multiply                               *\n";
        cout << "*  4. Divide                                 *\n";
        cout << "*  5. Modulus                                *\n";
        cout << "**********************************************\n";
        cout << "Enter your choice (1-5): ";


        cin >> choice;
        cout << "Enter two numbers: ";
        cin >> a >> b;

        switch (choice) {
        case 1:
            cout << "Result: " << sum(a, b) << endl;
            break;
        case 2:
            cout << "Result: " << difference(a, b) << endl;
            break;
        case 3:
            cout << "Result: " << product(a, b) << endl;
            break;
        case 4:
            cout << "Result: " << quotient(a, b) << endl;
            break;
        case 5:
            cout << "Result: " << remainder(a, b) << endl;
            break;
        }
        // Ask if user wants to continue
        cout << "\nDo you want to continue? (Y/N) ";
        cin >> continueSystem;
    }

	cout << "Thank you for using the program!" << endl;
    return 0;
}
