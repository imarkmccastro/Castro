#include <iostream>
using namespace std;

const int MAX_ROWS = 10;
const int MAX_COLS = 10;
int arr[MAX_ROWS][MAX_COLS];
int rows = 0, cols = 0;

void choice() {
    cout << "1. Create Array\n";
    cout << "2. Display Array\n";
    cout << "3. Insert Element\n";
    cout << "4. Delete Element\n";
    cout << "5. Search Element\n";
    cout << "6. Update Element\n";
    cout << "7. Exit\n";
}

void createArray() {
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    if (rows > MAX_ROWS || cols > MAX_COLS) {
        cout << "Rows or columns exceed maximum allowed size.\n";
        return;
    }

    cout << "Enter elements row by row:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }
}

void displayArray() {
    if (rows == 0 || cols == 0) {
        cout << "Array is empty.\n";
        return;
    }

    cout << "The array is:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void insertElement() {
    if (rows == MAX_ROWS && cols == MAX_COLS) {
        cout << "Array is full, cannot insert more elements.\n";
        return;
    }

    int num, row, col;
    cout << "Enter the number to insert: ";
    cin >> num;
    cout << "Enter the row (0 to " << rows - 1 << ") to insert into: ";
    cin >> row;
    cout << "Enter the column (0 to " << cols - 1 << ") to insert into: ";
    cin >> col;

    if (row < 0 || row >= rows || col < 0 || col >= cols) {
        cout << "Invalid position!\n";
        return;
    }

    arr[row][col] = num;
    cout << "Element inserted successfully.\n";
}

void deleteElement() {
    if (rows == 0 || cols == 0) {
        cout << "Array is empty, nothing to delete.\n";
        return;
    }

    int row, col;
    cout << "Enter the row (0 to " << rows - 1 << ") of the element to delete: ";
    cin >> row;
    cout << "Enter the column (0 to " << cols - 1 << ") of the element to delete: ";
    cin >> col;

    if (row < 0 || row >= rows || col < 0 || col >= cols) {
        cout << "Invalid position!\n";
        return;
    }

    arr[row][col] = 0;
    cout << "Element deleted successfully.\n";
}

void searchElement() {
    if (rows == 0 || cols == 0) {
        cout << "Array is empty.\n";
        return;
    }

    int num;
    cout << "Enter the number to search: ";
    cin >> num;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] == num) {
                cout << "Element found at position (" << i << ", " << j << ").\n";
                return;
            }
        }
    }
    cout << "Element not found in the array.\n";
}

void updateElement() {
    if (rows == 0 || cols == 0) {
        cout << "Array is empty, nothing to update.\n";
        return;
    }

    int row, col, newValue;
    cout << "Enter the row (0 to " << rows - 1 << ") of the element to update: ";
    cin >> row;
    cout << "Enter the column (0 to " << cols - 1 << ") of the element to update: ";
    cin >> col;

    if (row < 0 || row >= rows || col < 0 || col >= cols) {
        cout << "Invalid position!\n";
        return;
    }

    cout << "Enter the new value: ";
    cin >> newValue;

    arr[row][col] = newValue;
    cout << "Element updated successfully.\n";
}

int main() {
    int choiceNum;
    do {
        choice();
        cout << "Enter your choice: ";
        cin >> choiceNum;
        switch (choiceNum) {
            case 1:
                createArray();
                break;
            case 2:
                displayArray();
                break;
            case 3:
                insertElement();
                break;
            case 4:
                deleteElement();
                break;
            case 5:
                searchElement();
                break;
            case 6:
                updateElement();
                break;
            case 7:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (choiceNum != 7);

    return 0;
}