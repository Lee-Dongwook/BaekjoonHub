#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	while (1)
	{
		string S;
		getline(cin, S);
		if (S == "END")
		{
			return 0;
		}
		reverse(S.begin(), S.end());
		cout << S << "\n";
	}
}