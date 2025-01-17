#include <cstring>
#include <iostream>
using namespace std;

//Function to calculate the factorial of a number

int factorial(int n){
	if (n == 0 || n == 1) {
		return 1; // Base case: The factorial of 0 or 1 is always 1.
	}
	else {
		return n * factorial(n - 1); // Recursive call to calculate the factorial.
	}
}



int main() {
	//Get input from the user
	int number; 
	cout << "Enter a number: ";
	cin >> number ; // Takes input from the user (e.g., 5).
	
	//Call the factorial function and display the result
	int result = factorial(number);  // Calls the `factorial` function with the user's input.
	cout << "The factorial of " << number << " is " << result << endl;
	return 0;
}

