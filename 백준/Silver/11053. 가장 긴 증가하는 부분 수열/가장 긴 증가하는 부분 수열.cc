#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> number(n);
    vector<int> dp(n, 1);  // dp[i]는 i까지의 가장 긴 증가하는 부분 수열의 길이를 나타냅니다.

    for (int i = 0; i < n; i++) {
        cin >> number[i];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (number[i] > number[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int result = *max_element(dp.begin(), dp.end());
    cout << result;

    return 0;
}
