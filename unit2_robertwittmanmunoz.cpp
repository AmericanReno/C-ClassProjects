#include <cstdio>
#include <iostream>
using namespace std;

void manager()
{
	double salary;
	cout << "Enter fixed salary for week: ";
	cin >> salary;
	cout << "\nTotal Pay: " << salary << endl;
}

void hourly()
{
	double pay;
	double hours;
	cout << "Enter dollar per hour: ";
	cin >> pay;
	cout << "Enter total week's hours: ";
	cin >> hours;
	if (hours > 40)
	{
		double overtime = hours - 40;
		overtime = (1.5 * pay) * overtime;
		cout << "Calulated Pay (w/o overtime): " << pay * hours << endl;
		cout << "Overtime Pay: " << overtime << endl;
		cout << "Total Pay: " << overtime + (pay * hours) << endl;
	}
	else
	{
		cout << "Calulated Pay: " << pay * hours << endl;
	}
}

void comission()
{
	double sales;
	cout << "Enter Gross Weekly Sales: ";
	cin >> sales;
	sales = sales * 0.057;
	cout << "Total Pay: " << sales + 250 << endl;
}

void pieceworkers()
{
	double compensation;
	cout << "Enter Fixed Money Amount Per Item: ";
	cin >> compensation;
	cout << "\nTotal Pay: " << compensation * 1 << endl;
}

int main()
{
	cout << "Welcome to pay calculator" << endl;

	do
	{
		int code;
		cout << "Please enter pay code: ";
		cin >> code;
		cout << "\n";

		switch (code) {
		case 1:
			manager();
			break;
		case 2:
			hourly();
			break;
		case 3:
			comission();
			break;
		case 4:
			pieceworkers();
		}

		char answer[2];
		char no[2] = ("n");
		cout << "\n\nContinue? (y/n)\t";
		cin >> answer;
		cout << "\n";

		if (answer[0] == no[0])
		{
			break;
		}

	} while (true);

	return 0;
}