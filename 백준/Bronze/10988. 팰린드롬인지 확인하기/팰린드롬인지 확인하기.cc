#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string n;
	cin >> n;

	string k = "";
	for (int i = n.size() - 1; i >= 0; i--)
	{
		k += n[i];
	}

	if (n == k)
	{
		cout << "1";
	}
	else {
		cout << "0";
	}

	return 0;
}