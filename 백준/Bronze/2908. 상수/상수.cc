#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int A, B;
	cin >> A >> B;

	string a = to_string(A);
	string b = to_string(B);

	string tempa = "";

	tempa += a[2];
	tempa += a[1];
	tempa += a[0];

	string tempb = "";

	tempb += b[2];
	tempb += b[1];
	tempb += b[0];

	int reala = stoi(tempa);
	int realb = stoi(tempb);

	if (reala > realb)
	{
		cout << reala;
	}
	else {
		cout << realb;
	}

	return 0;
}