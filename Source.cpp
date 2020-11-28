#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() 
{
	Rectangle r;
	cout << "Rectangle Calculator\n" << endl;
	do
	{
		float height = 0;
		float length = 0;

		cout << "Enter the height of the rectangle (1 - 20)" << endl;
		cin >> height;
		r.setHeight(height);

		cout << "\nEnter the length of the rectangle (1 - 20)" << endl;
		cin >> length;
		r.setLength(length);

		cout << "Perimeter: " << r.perimeter() << endl;
		cout << "Area: " << r.area() << endl;

		cout << "\nContinue? [Y/N]: ";
		char answer[2];
		char no[2] = ("n");
		cin >> answer;

		if (answer[0] == no[0])
		{
			break;
		}

	} while (true);

	return 0;
}