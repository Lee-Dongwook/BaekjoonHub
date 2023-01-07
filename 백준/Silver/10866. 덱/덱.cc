#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	deque<int> dq;
	string str;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		if (str == "push_front")
		{
			int num;
			cin >> num;
			dq.push_front(num);
		}
		else if (str == "push_back")
		{
			int num;
			cin >> num;
			dq.push_back(num);
		}
		else if (str == "pop_front") {
			if (!dq.empty()) {
				cout << dq.front() << endl;
				dq.pop_front();
			}
			else {
				cout << "-1" << endl;
			}
		}
		else if (str == "pop_back") {
			if (!dq.empty()) {
				cout << dq.back() << endl;
				dq.pop_back();
			}
			else {
				cout << "-1" << endl;
			}
		}
		else if (str == "size") {
			cout << dq.size() << endl;
		}
		else if (str == "empty") {
			if (dq.empty())
			{
				cout << "1" << endl;
			}
			else {
				cout << "0" << endl;
			}
		}
		else if (str == "front") {
			if (!dq.empty()) {
				cout << dq.front()<<endl;
			}
			else {
				cout << "-1" << endl;
			}
		}
		else if (str == "back") {
			if (!dq.empty()) {
				cout << dq.back()<<endl;
			}
			else {
				cout << "-1" << endl;
			}
		}
	}
	return 0;
}