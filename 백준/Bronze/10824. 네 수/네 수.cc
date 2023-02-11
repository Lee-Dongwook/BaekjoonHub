#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	long long sum = 0;

	string A, B, C, D;
	cin >> A >> B >> C >> D;

	string temp = A + B;
	string temp2 = C + D;


	long long s = stoll(temp);
	long long m = stoll(temp2);

	sum = s + m;

	cout << sum;

	return 0;
}