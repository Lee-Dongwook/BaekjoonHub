#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


struct student {
	string name;
	int k;
	int e;
	int m;
};

vector<student> st;

bool cmp(struct student st1, struct student st2)
{
	if (st1.k == st2.k)
	{
		if (st1.e == st2.e)
		{
			if (st1.m == st2.m)
			{
				return st1.name < st2.name;
			}
			else
			{
				return st1.m > st2.m;
			}
		}
		else
		{
			return st1.e < st2.e;
		}
	}
	else
	{
		return st1.k > st2.k;
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	st.resize(N);

	for (int i = 0; i < N; i++)
	{
		cin >> st[i].name >> st[i].k >> st[i].e >> st[i].m;
	}

	sort(st.begin(), st.end(), cmp);

	for (int i = 0; i < st.size(); i++)
	{
		cout << st[i].name << "\n";
	}
	
	return 0;
}