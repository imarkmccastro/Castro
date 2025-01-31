/*


ACTIVITY 2.1: Even and Its Position 
 
Write a program that identifies the position of all even numbers in an array of 10 elements. 
 
Sample Output: 
Enter 10 numbers: 4 6 7 9 11 13 15 16 20 23 
Even numbers are located at indices: 0 1 7 8 


*/

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int even[10];
    int count = 0;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            even[count] = i;
            count++;
        }
    }
    cout << "Even numbers are located at indices: ";
    for (int i = 0; i < count; i++) {
        cout << even[i] << " ";
    }
    cout << endl;
    return 0;
}