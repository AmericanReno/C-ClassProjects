#include <iostream>
#include <string>

using namespace std;

int userInput()
{
	int number;
	cout << "Please enter a number" << endl;
	cin >> number;
	if ((number % 2) == 0)
	{
		return 1;
	}
	else
	{
		return 1.1;
	}
}

int main()
{
	try
	{
		throw userInput();
	}
	catch (double a)
	{
		cout << "Integer Exception" << endl;
	}
	catch (int a)
	{
		cout << "Double Excepion" << endl;
	}
	return 0;
}