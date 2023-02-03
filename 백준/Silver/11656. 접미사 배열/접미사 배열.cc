#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 1000
using namespace std;

vector<string>arr;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	arr.resize(MAX);

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		arr.push_back(s.substr(i,s.size()-i));
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < arr.size(); i++)
	{
		if(arr[i] != "")
		cout << arr[i] << "\n";
	}

	return 0;
}
