
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string clientname;
	string status;
	double discount;
	double total{};
	double hours;
	double timeset;

	cout << "Enter client name: ";
	getline(cin, clientname);


	cout << "Enter client status (VIP, PRO, STANDARD): ";
	cin >> status;

	//Consider instances that user can only input time capable to be computed by hour.
	cout << "Enter time set: ";
	cin >> timeset;

    if (status == "VIP" || status == "vip")
    {
        discount = 0.25;
        total = 100 * timeset;
        total = total - (total * discount);
        cout << "Total amount: " << total << endl;
    }
    else if (status == "PRO" || status == "pro")
    {
        discount = 0.15;
        total = 100 * timeset;
        total = total - (total * discount);
        cout << "Total amount: " << total << endl;
    }
    else if (status == "STANDARD" || status == "standard")
    {
        total = 100 * timeset;
        cout << "Total amount: " << total << endl;
    }
    else
    {
        cout << "Invalid status" << endl;
    }

	system("cls");

	cout <<
		"Client name: " << clientname << endl <<
		"Client status: " << status << endl <<
		"Time set: " << timeset << endl <<
		"Total amount: " << total << endl;

	return 0;

}