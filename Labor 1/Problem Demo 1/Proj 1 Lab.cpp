// Sample code : Problem Demo 1
#include <iostream>
//accept year of birth and compute for age
using namespace std;
int main()
{
	int yob, age;
	//yob = year of birth 
	cout << "Enter year of birth: ";
	cin >> yob;

	age = 2024 - yob;

	cout << "Your age is " << age << endl;
	return 0;
}

