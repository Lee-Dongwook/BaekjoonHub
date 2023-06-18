#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	while (T--)
	{
		int number;
		cin >> number;

		string word;
		cin >> word;

		for (int i = 0; i < word.size(); i++)
		{
			for (int j = 0; j < number; j++)
			{
				cout << word[i];
			}
		}
		cout << "\n";
	}

	return 0;
}