
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

map<string, int> po;
vector<string>name;
vector<string>result;

int main(void)
{
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		name.push_back(s);
		po.insert(make_pair(s, i + 1));
	}

	for (int i = 0; i < M; i++)
	{
		string temp;
		cin >> temp;

		if (temp[0] >= 65 && temp[0] <= 90)
		{
			result.push_back(to_string(po[temp]));
		}
		else
		{
			result.push_back(name[stoi(temp) - 1]);
		}
	}
	
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << "\n";

	return 0;
}
