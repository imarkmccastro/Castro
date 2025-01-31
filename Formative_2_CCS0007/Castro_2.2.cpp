/*

Write a program that will ask the user to enter the size of the array n < 100.  Once the array size is validated, it is required that the user will enter the elements of the array.  Finally, display the sorted array elements using any sorting algorithm from smallest to greatest. 
Sample Output: 
	   	Enter the size of the array:  4 
    Array element 1: 6 
Array element 2: 4 
Array element 3: 5 
Array element 4: 2 
The sorted array is:  2 4 5 6 
 


*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    if (n < 1 || n > 100) {
        cout << "Invalid array size. Please enter a size between 1 and 100." << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Array element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Bubble sort algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}