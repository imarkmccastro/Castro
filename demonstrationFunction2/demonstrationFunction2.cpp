#include <iostream>
#include <iomanip>
//USING USER DEFINE FUNCTIONS
using namespace std;

const int N = 10;
//Function prototypes
void initialize(int& zeroCount, int& oddCount, int& evenCount);
void getNumber(int& num);
void classifyNumber(int num, int& zeroCount, int& oddCount, int& evenCount);
void printResults(int zeroCount, int oddCount, int evenCount);

int main()
{
	//Variable declaration
	int counter; //loop control variable
	int number; //variable to store the new number
	int zeros; //variable to store the number of zeros
	int odds; //variable to store the number of odd integers
	int evens; //variable to store the number of even integers

	initialize(zeros, odds, evens);
	cout << "Please enter " << N << " integers." << endl;
	cout << "The numbers you entered are: " << endl;
	for (counter = 1; counter <= N; counter++)
	{
		getNumber(number);
		cout << number << " ";
		classifyNumber(number, zeros, odds, evens);
	}
	cout << endl;
	printResults(zeros, odds, evens);
	return 0;
}

void initialize(int& zeroCount, int& oddCount, int& evenCount)
{
	zeroCount = 0;
	oddCount = 0;
	evenCount = 0;
}

void getNumber(int& num)
{
	cin >> num;
}

void classifyNumber(int num, int& zeroCount, int& oddCount,
	int& evenCount)
{
	switch (num % 2)      // 10 0 11 13 15 20 100 88 64 9
	{
	case 0:
		evenCount++;
		if (num == 0)
			zeroCount++;
		break;
	case 1:
	case -1:
		oddCount++;
	}
}

void printResults(int zeroCount, int oddCount, int evenCount)
{
	cout << "There is/are " << evenCount << " evens, "
		<< "which includes " << zeroCount << " zeros"
		<< endl;
	cout << "The number of odd numbers is/are: " << oddCount
		<< endl;
}