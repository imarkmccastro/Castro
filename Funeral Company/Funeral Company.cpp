/*
Create a system that can accomodate multiple funeral reservation. Funeral has different types
of reservations:
- Standard
- Step up
- Premium
it also offers additional services
- Flowers
- Presentations
and - Area reservation - with different prices.
User can request for multiple additional services .

part 2: Funeral expanded its business and has variations of are reservation(3), Flowers of different types(5) and number of days and types of presentation (4).
*/

// Part 1 but with Merged Part 2 na

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int successfulReservations = 0;
    char continueSystem = 'Y';

    cout << "Welcome to LAST BREATH Funeral shop!" << endl;

    // Main loop for continuous reservations
    while (continueSystem == 'Y' || continueSystem == 'y') {
        string payment, cardPin;
        char extraOptions;
        int package = 0;
        int flowerQuantity = 0, presentationQuantity = 0, areaQuantity = 0; // Separate variables for quantities
        double amount = 0, totalCost = 0, cashPaid, change;
        double additional = 0;

        cout << "Please select the type of reservation you want to make: " << endl;
        cout << "1. Standard" << endl;
        cout << "2. Step up" << endl;
        cout << "3. Premium" << endl;
        cout << "Enter your choice: ";

        while (true) {
            cout << "Please choose a Package (1, 2, 3): ";
            cin >> package;

            switch (package) {
            case 1:
                cout << "You have selected the Standard package." << endl;
                amount = 1000;
                break;
            case 2:
                cout << "You have selected the Step up package." << endl;
                amount = 2000;
                break;
            case 3:
                cout << "You have selected the Premium package." << endl;
                amount = 3000;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                continue;
            }
            break;
        }

        // Flower service section
        do {
            cout << "Would you like to add a flower service (Y/N)?\n"
                << "Additional, 1250 php\n: ";
            cin >> extraOptions;

            if (extraOptions == 'Y' || extraOptions == 'y') {
                additional += 5000;
                cout << "Flower service added\n";
            }

            while (extraOptions == 'Y' || extraOptions == 'y') {
                int flower;
                cout << "Choose what type of flowers you like: \n"
                    << "(1) Rose\n(2) Sunflower\n(3) Orchid\n(4) Tulip\n(5) Sampaguita\n"
                    << "Enter what flower you prefer: ";
                cin >> flower;

                switch (flower) {
                case 1: cout << "You added rose\n"; break;
                case 2: cout << "You added sunflower\n"; break;
                case 3: cout << "You added orchid\n"; break;
                case 4: cout << "You added tulip\n"; break;
                case 5: cout << "You added sampaguita\n"; break;
                default:
                    cout << "Not an option, please try again\n";
                    continue;
                }
                break;
            }

            cout << "Would you like to add more? (Y/N)\n";
            cin >> continueSystem;
        } while (continueSystem == 'Y' || continueSystem == 'y');

        // Presentation service section
        do {
            cout << "Would you like to add a presentation service (Y/N)?\n"
                << "Additional, 2500 php\n: ";
            cin >> extraOptions;

            if (extraOptions == 'Y' || extraOptions == 'y') {
                additional += 10000;
                cout << "Presentation service added\n";
            }

            while (extraOptions == 'Y' || extraOptions == 'y') {
                int presentation;
                cout << "Choose what type of presentation you like: \n"
                    << "(1) Memorial Service\n(2) Religious Rites\n(3) Cremation\n(4) Reception\n"
                    << "Enter what presentation you prefer: ";
                cin >> presentation;

                switch (presentation) {
                case 1: cout << "You prefer a memorial service\n"; break;
                case 2: cout << "You prefer religious rites\n"; break;
                case 3: cout << "You prefer cremation\n"; break;
                case 4: cout << "You prefer a reception\n"; break;
                default:
                    cout << "Not an option, please try again\n";
                    continue;
                }
                break;
            }

            cout << "Would you like to add more? (Y/N)\n";
            cin >> continueSystem;
        } while (continueSystem == 'Y' || continueSystem == 'y');

        // Area service section
        do {
            cout << "Would you like to add an area service (Y/N)?\n"
                << "Additional, 1800 php\n: ";
            cin >> extraOptions;

            if (extraOptions == 'Y' || extraOptions == 'y') {
                additional += 20000; // Add area service cost
                cout << "Area service added\n";
            }

            while (extraOptions == 'Y' || extraOptions == 'y') {
                int area;
                cout << "Choose what type of area you like: \n"
                    << "(1) Your home\n(2) Religious section\n(3) Memorial gardens\n"
                    << "Enter where you prefer the area: ";
                cin >> area;

                switch (area) {
                case 1: cout << "You prefer the place to be at your home\n"; break;
                case 2: cout << "You prefer the place to be at a religious section\n"; break;
                case 3: cout << "You prefer the place to be at a memorial garden\n"; break;
                default:
                    cout << "Not an option, please try again\n";
                    continue;
                }
                break;
            }

            cout << "Would you like to add more? (Y/N)\n";
            cin >> continueSystem;
        } while (continueSystem == 'Y' || continueSystem == 'y');

        totalCost = amount + additional;
        cout << "\nYour total for this Grand Funeral is: PHP " << totalCost << endl;

        // Payment method
        while (true) {
            cout << "\nWhat is your payment method? [Cash/Card]: ";
            cin >> payment;

            if (payment == "Cash" || payment == "cash") {
                cout << "Please enter the amount of cash you are paying: ";
                cin >> cashPaid;

                if (cashPaid >= totalCost) {
                    change = cashPaid - totalCost;
                    cout << "Your change is: PHP " << change << endl;
                    cout << "\nThank you for choosing LAST BREATH Funeral shop!" << endl;
                    successfulReservations++;
                }
                else {
                    cout << "Insufficient cash." << endl;
                    continue;
                }
                break;
            }
            else if (payment == "Card" || payment == "card") {
                cout << "Please enter your card PIN: ";
                cin >> cardPin;

                if (cardPin == "1234") {
                    cout << "\nThank you for choosing LAST BREATH Funeral shop! Your card payment of PHP " << totalCost << " was successful." << endl;
                    successfulReservations++;
                }
                else {
                    cout << "Incorrect PIN. Transaction cancelled." << endl;
                    continue; // Retry payment method if card PIN is incorrect
                }
                break;
            }
            else {
                cout << "Invalid input, please try again." << endl;
            }
        }

        cout << "\nReservations Completed: " << successfulReservations << endl;

        // Ask if the user wants to continue after each completed transaction
        cout << "\nDo you want to continue processing more clients? [Y/N]: ";
        cin >> continueSystem;

        if (continueSystem == 'N' || continueSystem == 'n') {
            cout << "Thank you for choosing LAST BREATH Funeral shop! Please come again." << endl;
        }
    }

    return 0;
}
