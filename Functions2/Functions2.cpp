/*
Create a program with a user-defined function that compute the area of the following polygons
and circle. You are to create one user-defined function for every computation. The functions
must accept parameters by reference.
• Area of square given the side.
• Area of rectangle given the length and width.
• Area of triangle given the base and height.
• Area of circle given the radius.

*/

#include <iostream>
#include <cmath>
using namespace std;

//Function to calculate the area of a square
void areaOfSquare(double& side) {
	cout << "Enter the side of the square: ";
	cin >> side;
	cout << "The area of the square is: " << pow(side, 2) << endl;
}

//Function to calculate the area of a rectangle
void areaOfRectangle(double& length, double& width) {
	cout << "Enter the length of the rectangle: ";
	cin >> length;
	cout << "Enter the width of the rectangle: ";
	cin >> width;
	cout << "The area of the rectangle is: " << length * width << endl;
}

//Function to calculate the area of a triangle
void areaOfTriangle(double& base, double& height) {
	cout << "Enter the base of the triangle: ";
	cin >> base;
	cout << "Enter the height of the triangle: ";
	cin >> height;
	cout << "The area of the triangle is: " << 0.5 * base * height << endl;
}

//Function to calculate the area of a circle
void areaOfCircle(double& radius) {
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	cout << "The area of the circle is: " << 3.14159 * pow(radius, 2) << endl;
}

int main() {
	double side, length, width, base, height, radius;
	char continueSystem = 'Y';
	while (continueSystem == 'Y' || continueSystem == 'y') {
		int choice;
		cout << "**********************************************\n";
		cout << "*               AREA CALCULATOR MENU         *\n";
		cout << "**********************************************\n";
		cout << "*  1. Area of Square                         *\n";
		cout << "*  2. Area of Rectangle                      *\n";
		cout << "*  3. Area of Triangle                       *\n";
		cout << "*  4. Area of Circle                         *\n";
		cout << "**********************************************\n";
		cout << "Enter your choice (1-4): ";
		cin >> choice;
		switch (choice) {
		case 1:
			areaOfSquare(side);
			break;
		case 2:
			areaOfRectangle(length, width);
			break;
		case 3:
			areaOfTriangle(base, height);
			break;
		case 4:
			areaOfCircle(radius);
			break;
		default:
			cout << "Invalid choice. Please enter a number from 1 to 4." << endl;
		}
		cout << "\nDo you want to continue? (Y/N): ";
		cin >> continueSystem;
	}
	cout << "Thank you for using the program. Goodbye!" << endl;
	return 0;
}