/*

Create a program that will compare two input strings using strcmp( ).

Example Program Output:

STRING COMPARE
***************
Enter a first word (str1): Hello
Enter a second word (str2): hello 
negative

___________________________

STRING COMPARE
**************
Enter a first word (str1:): Hello
Enter a second word (str2): Hello
equal

STRING COMPARE
**************
Enter a first word (str1:): hello
Enter a second word (str2): hello
positive

*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    char continueSystem = 'Y';

    while (continueSystem == 'Y' || continueSystem == 'y') {
        cout << "STRING COMPARE\n";
        cout << "***************\n";
        cout << "Enter a first word (str1): ";
        cin.getline(str1, 100);
        cout << "Enter a second word (str2): ";
        cin.getline(str2, 100);
        
        // copies string 2 to string 1
        int result = strcmp(str1, str2);

        if (result < 0) {
            cout << "negative\n";
        } else if (result == 0) {
            cout << "equal\n";
        } else {
            cout << "positive\n";
        }

        cout << "___________________________\n";
        cout << "Enter 'Y' to continue or any other key to exit: ";
        cin >> continueSystem;
        cin.ignore();
    }

    return 0;
}


