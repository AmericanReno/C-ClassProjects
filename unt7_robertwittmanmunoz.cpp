#include <string>
#include <iostream>

using namespace std;

void replaceText(string& str, string toSearch, string replaceStr)
{
	size_t word = str.find(toSearch);

	while (word != std::string::npos)
	{
		str.replace(word, toSearch.size(), replaceStr);

		word = str.find(toSearch, word + replaceStr.size());
	}
}

int main()
{
	string text = "";

	cout << "Please enter a phrase with at least one instance of the word 'by' or 'BY':" << endl;
	getline(cin, text);

	if (text.find("by") >= 0)
	{
		replaceText(text, "by", "");
	}

	if (text.find("BY") >= 0)
	{
		replaceText(text, "BY", "");
	}

	cout << text;
	return 0;
}