#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    

    int n;
    cin >> n;

    vector<int> sequence(n);
    for (int i = 0; i < n; ++i) {
        cin >> sequence[i];
    }

    stack<int> s;
    vector<char> result;

    int current = 1; 
    for (int num : sequence) {
        while (s.empty() || s.top() != num) {
            if (current > n) {
                cout << "NO\n";
                return 0;
            }
            s.push(current++);
            result.push_back('+');
        }

        if (s.top() == num) {
            s.pop();
            result.push_back('-');
        }
    }

    for (char op : result) {
        cout << op << '\n';
    }

    return 0;
}
