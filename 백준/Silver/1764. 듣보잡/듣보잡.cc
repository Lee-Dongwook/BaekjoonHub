#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

vector<string> temp;
vector<string> result;

map<string, int> A;
map<string, int> B;

int cnt = 0;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int N,M;
	cin >> N>>M;

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		A.insert(make_pair(s, i));
	}

	for (int i = 0; i < M; i++)
	{
		string c;
		cin >> c;
		B.insert(make_pair(c, i));

	}

	for(auto iter = A.begin(); iter !=A.end(); iter++)
	{
		string key = iter->first;

		if (A.find(key) != A.end())
		{
			temp.push_back(key);
		}
		else 
		{
			continue;
		}
			
	}

	for (int i = 0; i < temp.size(); i++)
	{
		string key = temp[i];
		if (B.find(key) != B.end())
		{
			cnt++;
			result.push_back(key);
		}
		else {
			continue;
		}
	}

	sort(result.begin(), result.end());

	cout << cnt << "\n";

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << "\n";
	}

	return 0;
}