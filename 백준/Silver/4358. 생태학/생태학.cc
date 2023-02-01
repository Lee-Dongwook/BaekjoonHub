#include <iostream>
#include <map>
#include <string>
using namespace std;

map<string, float>tree;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	float sum = 0;

	while (getline(cin,s))
	{
		sum++;
		if (tree.find(s) != tree.end())
		{
			tree[s] += 1;
		}
		else
		{
			tree[s] = 1;
		}
		
	}
	cout << fixed;
	cout.precision(4);

	for (auto iter = tree.begin(); iter != tree.end(); iter++)
	{
		float val = (iter->second / sum) * 100;
		cout << iter->first << " ";
		cout << val << "\n";
	}



	return 0;
}