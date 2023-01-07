#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int stairCnt;
vector<int> stairs;
vector<int> dp;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> stairCnt;
	dp.resize(stairCnt);

	int num;
	for (int i = 0; i < stairCnt; i++) {
		cin >> num;
		stairs.push_back(num);
	}

	dp[0] = stairs[0];
	dp[1] = max(stairs[1], stairs[0] + stairs[1]);
	dp[2] = max(stairs[1] + stairs[2], stairs[0] + stairs[2]);

	for (int i = 3; i < stairCnt; i++) {
		dp[i] = max(dp[i - 2] + stairs[i], dp[i - 3] + stairs[i - 1] + stairs[i]);
	}

	cout << dp[stairCnt - 1] << endl;
	return 0;
}