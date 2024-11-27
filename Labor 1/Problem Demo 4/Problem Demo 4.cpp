/*
Errors:
	Syntactical Error: Your code is not formatted correctly. This can be caused by missing semicolons, brackets, or other syntax errors.
	    Intelligent	
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, favteacher;
    int age, favnum;
    char letterchoice;

    cout << "Hello User! Please enter your information below." << endl
        << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;
    cout << "Hello " << name << ", you are " << age << " years old." << endl;

    system("pause"); // pausing the program for a better view of the screen
    system("cls"); // cleaning the screen for a better view before the conditions

    // Logic: Error trap - if the user inputs a negative number or incorrect age
    if (age < 0) {
        cout << "Invalid age." << endl;
    }
    else if (age >= 0 && age < 3) {
        cout << "pa-3 yrs old ka muna atabs" << endl;
    }
    else if (age >= 3 && age < 5) {
        cout << "Welcome to Nursery" << endl;
    }
    else if (age >= 5 && age < 6) {
        cout << "Welcome to Kindergarten" << endl;
    }
    else if (age >= 6 && age < 12) {
        cout << "Welcome to Elementary" << endl;
    }
    else if (age >= 12 && age < 16) {
        cout << "Welcome to Junior High" << endl;
    }
    else if (age >= 16 && age < 18) {
        cout << "Welcome to Senior High" << endl;
    }
    else if (age >= 18 && age <= 30) {
        cout << "Welcome to University" << endl;
    }
    else {
        cout << "Ages 23 and above: Welcome to Continuing Education or Graduate Studies" << endl;
    }

    // Additional interaction for fun
    cout << "Please enter a letter choice (a, b, c): ";
    cin >> letterchoice;

    switch (letterchoice) {
    case 'a':
        cout << "A is for Apple" << endl;
        break;
    case 'b':
        cout << "B is for Ball" << endl;
        break;
    case 'c':
        cout << "C is for Carrot" << endl;
        break;
    default:
        cout << "Sorry but I don't recognize the letter" << endl;
        break;
    }

    // Favorite Number
    cout << "\nWhat's your favorite number? (1-3) ";
    cin >> favnum;

    switch (favnum) {
    case 1:
        cout << "1 is for One" << endl;
        break;
    case 2:
        cout << "2 is for Two" << endl;
        break;
    case 3:
        cout << "3 is for Three" << endl;
        break;
    default:
        cout << "Sorry but I don't recognize the number" << endl;
        break;
    }

    cout << "\n";
    system("pause"); // pausing before closing the program

    return 0; // ending the code with 0 error
}
