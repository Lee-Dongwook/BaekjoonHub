#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

set<string> name;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string a, b;
		cin >> a >> b;
		
		if (b == "enter")
		{
			name.insert(a);
		}
		else
		{
			name.erase(a);
		}
	}
	
	for (auto iter = name.rbegin(); iter != name.rend(); iter++)
	{
		cout << *iter << "\n";
	}

	return 0;
}
