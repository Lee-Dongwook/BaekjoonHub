#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> result;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string str;
    cin >> str;
    
    for(char i = 'a'; i <= 'z'; i++){
        int cnt = count(str.begin(), str.end(), i);
        result.push_back(cnt);
    }
    
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}