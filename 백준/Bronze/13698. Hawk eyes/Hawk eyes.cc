#include <iostream>
#include <string>

using namespace std;

void swap(int &a, int&b)
{
	int temp = a;
	a = b;
	b = temp;
}

void shake(int *cup, char a)
{
	if (a == 'A') swap(cup[0], cup[1]);
	else if (a == 'B') swap(cup[0], cup[2]);
	else if (a == 'C') swap(cup[0], cup[3]);
	else if (a == 'D') swap(cup[1], cup[2]);
	else if (a == 'E') swap(cup[1], cup[3]);
	else if (a == 'F') swap(cup[2], cup[3]);
}


int main() {
	int cup[4] = { 1, 0, 0, 2 }; // 작은 공 : 1 // 큰 공 : 2
	int Small = 0;  // 작은공 위치
	int Big = 0; // 큰공 위치
	string str;
	getline(cin, str, '\n');

	for (int i = 0; i < str.size(); i++)
	{
		shake(cup, str[i]);
	}

	for (int i = 0; ; i++)
	{
		if (cup[i] == 1) Small = i + 1;
		if (cup[i] == 2) Big = i + 1;
		if (Small && Big) break;
	}

	cout << Small << "\n" << Big;


}