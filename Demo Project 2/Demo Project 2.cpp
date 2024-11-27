/*

RULES OF CODING

Cases
- camelCase
	- camelLongerNameCase
- snake_Camel_Case
- PascalCase
	- Pascal LongerNameCase
- Snake_Pascal_Case
- snake_ lower_ case
- SNAKE_SCREAMING_ CASE
1. Naming Convention
	variable - camelCase (-10%)
	constant - SNAKE_ SCREAMING CASE (-10%)
	function - PascalCase (-10%)
2. Naming should make sense & Use only global abbreviation
3. Code Construction (-2%)
{
	constant variable 
	variable
	
	code block
}
4. Refrain using Global Variable (automatic 0)

*/

/*
Global Variable example: Global variable to set value as 5
Global Variable = Outside the main function

const int MAX_SELELCTION = 5;
int maxSelection = 5;
#define "MaxSelection" 5


int main ()

{
	int x = 5;
	cout << x;

	system("pause");
	return 0;
}

*/

// Demo Project
// Collect Grade of student in 5 subjects and display average with their name

//	Activity projects
//	1. Collect names and age of visitors of resort, based on their age provide them their required payment(Levels: Kids, Adult, Senior). Payment should check if they input enoung *enoung* : unknown word. 
//	Sari Sari Store System, user can pick as much as they can and compute their total amount to be payed and add their name in receipt
//	3. Compute the total clients entering a park per group then providing them a name for their group for payment. if not payed enough they can't enter and will entertain other user
//	4. User can compute the salary of their worker per hour, inputing their salary per hour and their time of work, a additional bonus if they are working night shift(x2.5), early morning shift. (1.8x)

#include <iostream>
using namespace std;

//  Activity Project 1 - With Loops
int main()
{
    int choice;
    double payment;
    double total = 0;
    bool valid = false; 

    // Product Selection with Loop
    while (!valid)
    {
        cout << "Store ko to!\n"
            << "1. Aooke (3 Dollars)\n"
            << "2. Pineapple (4 Dollars)\n"
            << "3. Pine (5 Dollars)\n"
            << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            total = 3;
            cout << "You selected Aooke. Pay 3 Dollars.\n";
            valid = true; // Mark as valid input
            break;
        case 2:
            total = 4;
            cout << "You selected Pineapple. Pay 4 Dollars.\n";
            valid = true; // Mark as valid input
            break;
        case 3:
            total = 5;
            cout << "You selected Pine. Pay 5 Dollars.\n";
            valid = true; // Mark as valid input
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }

    // Payment Process with Loop
    while (total > 0)
    {
        cout << "\nInput Payment: ";
        cin >> payment;

        total -= payment; // Subtract payment from total

        if (total > 0)
        {
            cout << "Insufficient payment. Remaining balance: " << total << " Dollars.\n";
        }
        else if (total < 0)
        {
            cout << "You have a change of " << -total << " Dollars.\n";
            break;
        }
        else
        {
            cout << "Payment Complete.\n";
            break;
        }
    }

    cout << "Thank you for shopping at Store Ko To!\n";
    return 0;
}
