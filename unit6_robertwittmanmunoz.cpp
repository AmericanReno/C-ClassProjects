#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	string text = "";
	stack<string> backwardsText;
	string word = "";

	cout << "Please enter a string: ";
	getline(cin, text);
	text += " ";

	while (true)
	{
		int space = text.find(' ');
		word = text.substr(0, space);
		backwardsText.push(word);
		text.erase(0, space + 1);

		if (text.empty())
		{
			break;
		}
	}

	while (true)
	{
		cout << backwardsText.top() << " ";
		backwardsText.pop();

		if (backwardsText.empty())
		{
			break;
		}
	}

	return 0;
}