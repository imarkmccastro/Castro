/*

Write a program that counts the number of vowels and whitespaces in a string. The user’s input should be all capital letters only.  
 
Sample Output: 
Enter a string: WELCOME TO ARRAYS Vowels: 
	A 	2 
	E 	2 
	I 	0 
O 2 
	U 	0 
Whitespaces – 2 
  


*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int vowels[5] = {0}; // A, E, I, O, U
    int whitespaces = 0;

    for (char ch : str) {
        switch (ch) {
            case 'A':
                vowels[0]++;
                break;
            case 'E':
                vowels[1]++;
                break;
            case 'I':
                vowels[2]++;
                break;
            case 'O':
                vowels[3]++;
                break;
            case 'U':
                vowels[4]++;
                break;
            case ' ':
                whitespaces++;
                break;
        }
    }

    cout << "Vowels:" << endl;
    cout << "A\t" << vowels[0] << endl;
    cout << "E\t" << vowels[1] << endl;
    cout << "I\t" << vowels[2] << endl;
    cout << "O\t" << vowels[3] << endl;
    cout << "U\t" << vowels[4] << endl;
    cout << "Whitespaces - " << whitespaces << endl;

    return 0;
}