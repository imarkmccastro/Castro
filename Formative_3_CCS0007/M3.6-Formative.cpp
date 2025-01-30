/*

String to Words

Example Output:

Enter a String: one two three four
four
three
two
one

Enter a string: the man with a dog 
dog
a
with
man
the

*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    char continueSystem = 'Y';

    while (continueSystem == 'Y' || continueSystem == 'y') {
        cout << "String to Words\n";
        cout << "***************\n";
        cout << "Enter a String: ";
        cin.getline(str, 100);

        char *token = strtok(str, " ");
        char *words[100];
        int i = 0;

        // Loop unti strtok() returms NULL
        while (token != NULL) {
            words[i++] = token;
            token = strtok(NULL, " ");
        }

        for (int j = i - 1; j >= 0; j--) {
            cout << words[j] << endl;
        }

        cout << "___________________________\n";
        cout << "Enter 'Y' to continue or any other key to exit: ";
        cin >> continueSystem;
        cin.ignore();
    }

    return 0;
}
