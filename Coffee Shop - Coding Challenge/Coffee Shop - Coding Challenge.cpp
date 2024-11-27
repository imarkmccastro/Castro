#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    char shop1, shop2;
    int macha, latte, americano, spanishBread, garlicBread, brownies;
    double total2 = 0.0, total = 0.0;

    cout << "Welcome to Pastry & Coffee shop ";

    cout << "Here are the list of shop1 \n"
        << "Matcha: 50.00\n"
        << "Latte: 60.00\n"
        << "Americano: 70.00\n\n";

    cout << "Here are the list of shop2 \n"
        << "Spanish Bread: 30.00\n"
        << "Garlic Bread: 40.00\n"
        << "Brownies: 50.00\n";

    cout << "\nEnter the shop you want to buy: Coffee (A) , Pastries (B) \n";
    cin >> shop1;

    switch (shop1)
    {
    case 'a':
        cout << "\nEnter the quantity of Matcha: ";
        cin >> macha;
        total += macha * 50.00;
        cout << "Enter the quantity of Latte: ";
        cin >> latte;
        total += latte * 60.00;
        cout << "Enter the quantity of Americano: ";
        cin >> americano;
        total += americano * 70.00;
        break;

    case 'b':
        cout << "\nEnter the quantity of Spanish Bread: ";
        cin >> spanishBread;
        total += spanishBread * 30.00;
        cout << "Enter the quantity of Garlic Bread: ";
        cin >> garlicBread;
        total += garlicBread * 40.00;
        cout << "Enter the quantity of Brownies: ";
        cin >> brownies;
        total += brownies * 50.00;
        break;
    }

    cout << "\nTotal of Shop1: " << total << endl;

    cout << "\nDo you also want to buy from another shop? (y/n) \n";
    cin >> shop2;

    if (shop2 == 'y')
    {
        if (shop1 == 'a')
        {
            cout << "\nEnter the quantity of Spanish Bread: ";
            cin >> spanishBread;
            total2 += spanishBread * 30.00;
            cout << "Enter the quantity of Garlic Bread: ";
            cin >> garlicBread;
            total2 += garlicBread * 40.00;
            cout << "Enter the quantity of Brownies: ";
            cin >> brownies;
            total2 += brownies * 50.00;
        }
        else if (shop1 == 'b')
        {
            cout << "\nEnter the quantity of Matcha: ";
            cin >> macha;
            total2 += macha * 50.00;
            cout << "Enter the quantity of Latte: ";
            cin >> latte;
            total2 += latte * 60.00;
            cout << "Enter the quantity of Americano: ";
            cin >> americano;
            total2 += americano * 70.00;
        }
    }
    else if (shop2 == 'n')
    {
        cout << "\nThank you for shopping! \n";
        
        return 0;
    }

    cout << "\nTotal of Shop2: " << total2 << endl;
    cout << "\nFinal Total: " << total + total2 << endl;

    return 0;
}
