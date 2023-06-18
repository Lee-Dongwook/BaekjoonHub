#include <iostream>
#include <vector>
#include <tuple>
#include <string>
using namespace std;

vector<tuple<string, int, string>> vec;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	for (int i = 0; i < 20; i++)
	{
		string name;
		double score;
		string grade;
		cin >> name >> score >> grade;
		vec.push_back(make_tuple(name,score,grade));
	}

	double sum = 0.0;
	double subject = 0.0;
	double result = 0.0;

	for (int i = 0; i < vec.size(); i++)
	{
		if (get<2>(vec[i]) == "A+")
		{
			sum += get<1>(vec[i]) * 4.5;
			subject += get<1>(vec[i]);
		}
		else if (get<2>(vec[i]) == "A0")
		{
			sum += get<1>(vec[i]) * 4.0;
			subject += get<1>(vec[i]);
		}
		else if (get<2>(vec[i]) == "B+")
		{
			sum += get<1>(vec[i]) * 3.5;
			subject += get<1>(vec[i]);
		}
		else if (get<2>(vec[i]) == "B0")
		{
			sum += get<1>(vec[i]) * 3.0;
			subject += get<1>(vec[i]);
		}
		else if (get<2>(vec[i]) == "C+")
		{
			sum += get<1>(vec[i]) * 2.5;
			subject += get<1>(vec[i]);
		}
		else if (get<2>(vec[i]) == "C0")
		{
			sum += get<1>(vec[i]) * 2.0;
			subject += get<1>(vec[i]);
		}
		else if (get<2>(vec[i]) == "D+")
		{
			sum += get<1>(vec[i]) * 1.5;
			subject += get<1>(vec[i]);
		}
		else if (get<2>(vec[i]) == "D0")
		{
			sum += get<1>(vec[i]) * 1.0;
			subject += get<1>(vec[i]);
		}
		else if (get<2>(vec[i]) == "F")
		{
			sum += get<1>(vec[i]) * 0.0;
			subject += get<1>(vec[i]);
		}
		else if (get<2>(vec[i]) == "P")
		{
			sum = sum;
		}
	}

	result = (double)sum / subject;

	cout << fixed;
	cout.precision(6);
	cout << result;

	return 0;
}