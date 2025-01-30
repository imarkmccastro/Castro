/*
C++ program from scratch that performs a series of operations on an array, as
specified in a menu. You are required to design and implement functions corresponding to each
operation to achieve the desired output.


Display Array Contents
Insert Element
Delete Element
Swap Elements
Reverse Array
Find Element
Exit Program


*/

#include <iostream>
#include <string>
using namespace std;

// Function to display the current contents of the array
void displayArray(string arr[], int size) {
    cout << "Array Contents: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert a new element at a specified position
void insertElement(string arr[], int& size, string element, int position) {
    if (position < 0 || position > size) {
        cout << "Invalid position. Please enter a valid position." << endl;
        return; 
    }

// A Shift elements to the right to make space for the new element
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    size++;
    cout << "Element inserted successfully." << endl;
}

// A Function to delete an element from a specified position
void deleteElement(string arr[], int& size, int position) {
    if (position < 0 || position >= size) {
        cout << "Invalid position. Please enter a valid position." << endl;
        return; // Exit the function if position is invalid
    }

    // Shift elements to the left to fill the gap
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;
    cout << "Element deleted successfully." << endl;
}

// A Function to swap two elements at specified positions
void swapElements(string arr[], int size, int position1, int position2) {
    if (position1 < 0 || position1 >= size || position2 < 0 || position2 >= size) {
        cout << "Invalid positions. Please enter valid positions." << endl;
        return; // Exit the function if positions are invalid
    }

    string temp = arr[position1];
    arr[position1] = arr[position2];
    arr[position2] = temp;
    cout << "Elements swapped successfully." << endl;
}

// A Function to reverse the order of the array elements
// Reference: https://stackoverflow.com/questions/48754431/how-to-reverse-elements-in-an-array
// then Modified to fit the program
void reverseArray(string arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        string temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    cout << "Array reversed successfully." << endl;
}

// A Function to search for a specific name in the array and return its position
// Reference: https://www.geeksforgeeks.org/searching-elements-in-an-array-array-operations/
// then Modified to fit the program
int findName(string arr[], int size, string element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    string arr[20] = {"MARK", "ANDREW", "PIPOY", "JOVS", "LEDSON", "SHABU", "CARLOS", "EMAU", "JAHAHA", "EDIWOW"}; 
    int size = 10; 
    int choice;
    char continueSystem = 'Y';

    while (continueSystem == 'Y' || continueSystem == 'y') {
       cout << "************************************************" << endl;
        cout << "\t\tFUNCTION MENU" << endl;
        cout << "************************************************" << endl;
        cout << "* 1. Display Array Names *\n"
            "* 2. Insert Name *\n"
            "* 3. Delete Name *\n"
            "* 4. Swap Name Position *\n"
            "* 5. Reverse Array Contents  *\n"
            "* 6. Find Name *\n"
            "* 7. Exit Program *\n";
        cout << "*Enter your choice (1-7): *" << endl;
        cin >> choice;


        switch (choice) {
            case 1:
                displayArray(arr, size);
                break;
            case 2: {
                string element;
                int position;
                cout << "Enter the name to insert: ";
                cin.ignore(); 
                getline(cin, element); 
                cout << "Enter the position number to insert: ";
                cin >> position;
                insertElement(arr, size, element, position);
                break;
            }
            case 3: {
                int deletePosition;
                cout << "Enter the position number to delete: ";
                cin >> deletePosition;
                deleteElement(arr, size, deletePosition);
                break;
            }
            case 4: {
                int position1, position2;
                cout << "Enter the first position number to swap: ";
                cin >> position1;
                cout << "Enter the second position number to swap: ";
                cin >> position2;
                swapElements(arr, size, position1, position2);
                break;
            }
            case 5:
                reverseArray(arr, size);
                break;
            case 6: {
                string searchName;
                cout << "Enter the name to search: ";
                cin.ignore(); 
                getline(cin, searchName); 
                int position = findName(arr, size, searchName); 
                if (position != -1) {
                    cout << "Name found at position: " << position << endl;
                } else {
                    cout << "Name not found in the array. Must be All Caps" << endl;
                }
                break;
            }
            case 7:
                cout << "Exiting program. Thank you!" << endl;
                continueSystem = 'N';
                break;
            default:
                cout << "Invalid choice. Please enter a number from 1 to 7." << endl;
        }
    }

    return 0;
}