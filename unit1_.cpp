#include <iostream>
using namespace std;

int main()
{
	cout << "Integer\t" << "Square\t" << "Cube" << endl;
	int x;
	for (x = 0; x <= 10; x++)
	{
		cout << x << "\t" << x * x << "\t" << x * x * x << endl;
	}
	return 0;
}