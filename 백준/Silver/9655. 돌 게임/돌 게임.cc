#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int N;
	cin >> N;

	if (N % 2 == 0)
	{
		cout << "CY" << endl;
	}
	else if (N % 2 != 0)
	{
		cout << "SK" << endl;
	}

	return 0;
}