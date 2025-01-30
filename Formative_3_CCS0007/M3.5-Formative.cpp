/*

Uppercase

Example Program Output:

Enter some string: all friend story
output: All Friend Story

***************
Enter some string: ALL FRIEND STORY
output: All Friend Story

*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    char continueSystem = 'Y';

    while (continueSystem == 'Y' || continueSystem == 'y') {
        cout << "Uppercase\n";
        cout << "***************\n";
        cout << "Enter some string: ";
        cin.getline(str, 100);

        for (int i = 0; i < strlen(str); i++) {
            
            // convert str[i] to uppercase
            if (i == 0 || str[i - 1] == ' ') {
                str[i] = toupper(str[i]);
            } else {
                str[i] = tolower(str[i]);
            }
        }

        cout << "output: " << str << endl;

        cout << "___________________________\n";
        cout << "Enter 'Y' to continue or any other key to exit: ";
        cin >> continueSystem;
        cin.ignore();
    }

    return 0;
}