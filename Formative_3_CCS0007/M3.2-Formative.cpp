/*

Copying strings

Example Program Output:

STRING COPY
***************
Enter a first word (str1): abc
Enter a second word (str2): def
new string value for str1: def

STRING COPY
***************
Enter a first word (str1): abc
Enter a second word (str2): abc def ghi jkl
new string value for str1: abc def ghi jkl


*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    char continueSystem = 'Y';

    while (continueSystem == 'Y' || continueSystem == 'y') {
        cout << "STRING COPY\n";
        cout << "***************\n";
        cout << "Enter a first word str1: ";
        cin.getline(str1, 100);
        cout << "Enter a second word str2: ";
        cin.getline(str2, 100);

        strcpy(str1, str2);

        cout << "new string value for str1: " << str1 << endl;

        cout << "___________________________\n";
        cout << "Enter 'Y' to continue or any other key to exit: ";

        cin >> continueSystem;
        cin.ignore();


    }
    
    return 0;   
}



