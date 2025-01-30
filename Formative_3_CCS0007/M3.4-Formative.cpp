/*

Palindrome

Example Program Output:

PALINDROME
***************
Enter a word: racecar
racecar is a palindrome

PALINDROME
***************
Enter a word: carrace
carrace is not a palindrome

*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    char continueSystem = 'Y';

    while (continueSystem == 'Y' || continueSystem == 'y') {
        cout << "PALINDROME\n";
        cout << "***************\n";
        cout << "Enter a word: ";
        cin.getline(str, 100);

        int length = strlen(str);
        bool isPalindrome = true;

        for (int i = 0; i < length / 2; i++) {
            if (str[i] != str[length - i - 1]) {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome) {
            cout << str << " is a palindrome\n";
        } else {
            cout << str << " is not a palindrome\n";
        }

        cout << "___________________________\n";
        cout << "Enter 'Y' to continue or any other key to exit: ";
        cin >> continueSystem;
        cin.ignore();
    }

    return 0;
}






