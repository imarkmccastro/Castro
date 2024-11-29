/*

100 Points

Movie reservation booth
that has 3 different ratings:
- Kids
- Young adult and;
- Adult
, Can do multiple ticket reservation at once and max out of 30 on each 3 movies

Part 2:

The user will not input just their age and name. The system should check what movies they are available to watch, they won't
be able to view or reserve when they are not in age bracket ceiling the movie theater will have 3 movis each. The user can reserve multiple tickets at once.
*/



#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    int successfulReservation = 0;
    char continueSystem = 'Y';

    // Ticket availability for each movie
    int frozenTickets = 30, mcQueenTickets = 30, shrekTickets = 30;
    int conjuringTickets = 30, nunTickets = 30, annabelleTickets = 30;
    int purgeTickets = 30, grudgeTickets = 30, ringTickets = 30;

    cout << "Welcome to Ayala Malls Harbor Point Cinema!" << endl;

    // Main loop for continuous reservation
    while (continueSystem == 'Y' || continueSystem == 'y') {
        string name, payment, cardPin;
        int age;
        char rating;
        int movieChoice, pax;
        double amount = 0, cashPaid, change;
        string selectedMovie = "";

        // User inputs name and age
        cout << "\nEnter your name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter your age: ";
        cin >> age;

        // Check movie rating based on age
        cout << "\nHere are the available movie ratings for you: \n";
        if (age <= 12) {
            cout << "Kids (K)\n";
        }
        else if (age <= 17) {
            cout << "Kids (K), Young Adult (Y)\n";
        }
        else if (age >= 18) {
            cout << "Kids (K), Young Adult (Y), Adult (A)\n";
        }

        // Rating selection loop
        while (true) {
            cout << "Enter the rating of the movie you want to watch: ";
            cin >> rating;

            if ((rating == 'K' || rating == 'k') && age <= 12) {
                cout << "You have selected Kids movie\nTicket price: 250 pesos" << endl;
                cout << "Available movies: \n";
                cout << "1. Frozen (Tickets available: " << frozenTickets << ")\n";
                cout << "2. McQueen (Tickets available: " << mcQueenTickets << ")\n";
                cout << "3. Shrek (Tickets available: " << shrekTickets << ")\n";
                break;
            }
            else if ((rating == 'Y' || rating == 'y') && age <= 17) {
                cout << "You have selected Young Adult movie\nTicket price: 350 pesos" << endl;
                cout << "Available movies: \n";
                cout << "1. The Conjuring (Tickets available: " << conjuringTickets << ")\n";
                cout << "2. The Nun (Tickets available: " << nunTickets << ")\n";
                cout << "3. Annabelle (Tickets available: " << annabelleTickets << ")\n";
                break;
            }
            else if ((rating == 'A' || rating == 'a') && age > 17) {
                cout << "You have selected Adult movie\nTicket price: 450 pesos" << endl;
                cout << "Available movies: \n";
                cout << "1. The Purge (Tickets available: " << purgeTickets << ")\n";
                cout << "2. The Grudge (Tickets available: " << grudgeTickets << ")\n";
                cout << "3. The Ring (Tickets available: " << ringTickets << ")\n";
                break;
            }
            else {
                cout << "You are not allowed to watch this movie rating. Please select again.\n";
            }
        }

        // Get the number of tickets
        cout << "How many Pax? ";
        cin >> pax;

        // Validate ticket availability and calculate amount
        if (rating == 'K' || rating == 'k') {
            cout << "Enter your choice: ";
            cin >> movieChoice;

            if (movieChoice == 1 && pax <= frozenTickets) {
                frozenTickets -= pax;
                amount = pax * 250;
                selectedMovie = "Frozen";
            }
            else if (movieChoice == 2 && pax <= mcQueenTickets) {
                mcQueenTickets -= pax;
                amount = pax * 250;
                selectedMovie = "McQueen";
            }
            else if (movieChoice == 3 && pax <= shrekTickets) {
                shrekTickets -= pax;
                amount = pax * 250;
                selectedMovie = "Shrek";
            }
            else {
                cout << "Invalid choice or insufficient tickets. Try again.\n";
                continue;
            }
        }
        else if (rating == 'Y' || rating == 'y') {
            cout << "Enter your choice: ";
            cin >> movieChoice;

            if (movieChoice == 1 && pax <= conjuringTickets) {
                conjuringTickets -= pax;
                amount = pax * 350;
                selectedMovie = "The Conjuring";
            }
            else if (movieChoice == 2 && pax <= nunTickets) {
                nunTickets -= pax;
                amount = pax * 350;
                selectedMovie = "The Nun";
            }
            else if (movieChoice == 3 && pax <= annabelleTickets) {
                annabelleTickets -= pax;
                amount = pax * 350;
                selectedMovie = "Annabelle";
            }
            else {
                cout << "Invalid choice or insufficient tickets. Try again.\n";
                continue;
            }
        }
        else if (rating == 'A' || rating == 'a') {
            cout << "Enter your choice: ";
            cin >> movieChoice;

            if (movieChoice == 1 && pax <= purgeTickets) {
                purgeTickets -= pax;
                amount = pax * 450;
                selectedMovie = "The Purge";
            }
            else if (movieChoice == 2 && pax <= grudgeTickets) {
                grudgeTickets -= pax;
                amount = pax * 450;
                selectedMovie = "The Grudge";
            }
            else if (movieChoice == 3 && pax <= ringTickets) {
                ringTickets -= pax;
                amount = pax * 450;
                selectedMovie = "The Ring";
            }
            else {
                cout << "Invalid choice or insufficient tickets. Try again.\n";
                continue;
            }
        }

        // Display total cost
        cout << "Your total is: PHP " << amount << endl;

        // Payment method
        while (true) {
            cout << "\nWhat is your payment method? [Cash/Card]: ";
            cin >> payment;

            if (payment == "Cash" || payment == "cash") {
                cout << "Please enter the amount of cash you are paying: ";
                cin >> cashPaid;

                if (cashPaid >= amount) {
                    change = cashPaid - amount;
                    cout << "Your change is: PHP " << change << endl;
                    successfulReservation++;
                }
                else {
                    cout << "Insufficient cash. Try again.\n";
                    continue;
                }
                break;
            }
            else if (payment == "Card" || payment == "card") {
                cout << "Please enter your card PIN: ";
                cin >> cardPin;

                if (cardPin == "1234") {
                    cout << "\nYour card payment of PHP " << amount << " was successful.\n";
                    successfulReservation++;
                }
                else {
                    cout << "Incorrect PIN. Transaction cancelled.\n";
                    continue;
                }
                break;
            }
            else {
                cout << "Invalid input, please try again.\n";
            }
        }


        cout << "Please Wait.. Printing Receipt...." << endl;
        this_thread::sleep_for(chrono::seconds(3));

        // Print receipt
        cout << "\n---- R E C E I P T ----" << endl;
        cout << "Name   : " << name << endl;
        cout << "Movie  : " << selectedMovie << endl;
        cout << "Pax    : " << pax << endl;
        cout << "Amount : PHP " << amount << endl;
        cout << "-----------------------" << endl;

        cout << "Reservation Completed : " << successfulReservation;

        // Ask if user wants to continue
        cout << "\nDo you want to make another reservation? (Y/N): ";
        cin >> continueSystem;
    }

    cout << "\nThank you for using Ayala Malls Harbor Point Cinema Reservation System!" << endl;
    return 0;
}
