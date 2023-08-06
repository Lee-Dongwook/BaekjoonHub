#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";

    string temp = "";
    vector <int> v;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == ' ') {
            v.push_back(stoi(temp));
            temp = "";
        } else {
            temp += s[i];
        }
    }
    v.push_back(stoi(temp));
    sort(v.begin(), v.end());

    string min = to_string(v[0]);
    string max = to_string(v[v.size()-1]);

    answer = min + " " + max;

    return answer;
}