/*

Concatenating strings

Example Program Output:

STRING CONCATENATION
***************
Enter a first word (str1): Hello
Enter a second word (str2): World
new string value for str1: Hello World

STRING CONCATENATION
***************
Enter a first word (str1): Welcome
Enter a second word (str2): To Feu
new string value for str1: Welcome To Feu

*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    char continueSystem = 'Y';

    while (continueSystem == 'Y' || continueSystem == 'y') {
        cout << "STRING CONCATENATION\n";
        cout << "***************\n";
        cout << "Enter a first word (str1): ";
        cin.getline(str1, 100);
        cout << "Enter a second word (str2): ";
        cin.getline(str2, 100);

        strcat(str1, str2);

        cout << "new string value for str1: " << str1 << endl;

        cout << "___________________________\n";
        cout << "Enter 'Y' to continue or any other key to exit: ";

        cin >> continueSystem;
        cin.ignore();
    }
}
