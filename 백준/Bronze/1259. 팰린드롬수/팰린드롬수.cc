#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while (1)
	{
		string num;
		cin >> num;
		if (num == "0")
		{
			return 0;
		}

		string k = "";
		for (int i = num.size() - 1; i >= 0; i--)
		{
			k += num[i];
		}

		if (num == k)
		{
			cout << "yes" << endl;
		}
		else if (num != k)
		{
			cout << "no" << endl;
		}


	}

	return 0;
}