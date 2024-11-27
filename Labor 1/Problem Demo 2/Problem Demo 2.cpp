#include <iostream>

using namespace std;

int main()
{
	int amount, canadian_rate;
	int canadian_amount;

	//conversion rate
	canadian_rate = 42.01;

	cout << "Enter Philippine peso: ";
	cin >> amount;

	//calculation
	canadian_amount = amount / canadian_rate;

	//output
	cout << "Canadian dollar: " << canadian_amount << endl;

	return 0;

}