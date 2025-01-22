//2 dimensions array

#include <iostream>
using namespace std;

int main()
{
    int item[5][3]; //Declare a 2D array item of five rows and three columns
    int sum;
    int counter;
    int row, column;

    cout << "Enter five sets of three numbers: ";
    sum = 0;
    for (row = 0; row < 5; row++)
    {
        for (column = 0; column < 3; column++)
        {
            cin >> item[row][column];
            sum = sum + item[row][column];
        }
    }
    cout << endl;
    cout << "The sum of the numbers is: " << sum << endl;
    cout << "The numbers in the array are: " << endl;
    //Print the numbers in the array.
    for (row = 0; row < 5; row++)
    {
        for (column = 0; column < 3; column++)
            cout << item[row][column] << " ";
        cout << endl;
    }
    return 0;
}