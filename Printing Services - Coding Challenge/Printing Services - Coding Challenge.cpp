#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int pages, total;
	double amount = 0, discount = 0, totalCost = 0;
	char letterchoice;

	cout << "Welcome to Mark's Print and Press, what can we do for you today?" << endl;

	cout << "\nWe offer the following kinds of papers: \n";
	cout << "Standard Paper - 5php each \n"
		 << "Photo Paper - 15php each \n"
		 << "Special Paper - 10php each \n";

	cout << "\nWe also offer discounts for bulk orders: \n";
	cout << "1.5% discount for 10-49 pages \n"
		 << "6% discount for 50-99 pages \n"
		 << "15% discount for 100 pages and above \n";

	cout << "\nHow many pages will you be printing? \n";
	cin >> pages;

	cout << "\nWhat paper will you avail? ('a' (standard paper), 'b' (photo paper), 'c' (special paper)) \n";
	cin >> letterchoice;

	switch (letterchoice)
	{
	case 'a':
		cout << "You have chosen standard paper. \n";
		amount = pages * 5;
		break;

	case 'b':
		cout << "\nYou have chosen photo paper. \n";
		amount = pages * 15;
		break;

	case 'c':
		cout << "\nYou have chosen special paper. \n";
		amount = pages * 10;
		break;

	default:
		cout << "Invalid choice. \n";
		return 1;
	}

	if (pages >= 100)
	{
		cout << "You have a total of " << pages << " pages and you will enjoy a 15% discount. \n";
		discount = amount * 0.15; // 15% discount
	}
	else if (pages >= 50)
	{
		cout << "You have a total of " << pages << " pages and you will enjoy a 6% discount. \n";
		discount = amount * 0.06; // 6% discount
	}
	else if (pages >= 10)
	{
		cout << "You have a total of " << pages << " pages and you will enjoy a 1.5% discount. \n";
		discount = amount * 0.015; // 1.5% discount
	}

	totalCost = amount - discount;
	cout << "\nTotal cost: " << totalCost << " php" << endl;

	return 0;
}
