#include <iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;

	int result1 = (N * 78) / 100;
	int result2 = (N * 80) / 100 + ((N * 20) / 100) * 78 / 100;

	cout << result1 << endl;
	cout << result2 << endl;

	return 0;
}