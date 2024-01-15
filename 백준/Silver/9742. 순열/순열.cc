#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        string word;
        int cnt;
        vector<char> vec;

        if (!(cin >> word >> cnt)) {
            break;
        }

        for (int i = 0; i < word.length(); i++) {
            vec.push_back(word[i]);
        }

        sort(vec.begin(), vec.end());

        int idx = 1;
        bool isExist = false;

        do {
            if (idx == cnt) {
                cout << word << " " << cnt << " = ";
                for (auto iter = vec.begin(); iter != vec.end(); iter++) {
                    cout << *iter;
                }
                isExist = true;
                cout << '\n';
            }
            idx++;
        } while (next_permutation(vec.begin(), vec.end()));

        if (!isExist) {
            cout << word << " " << cnt << " = " << "No permutation" << "\n";
        }
    }

    return 0;
}
