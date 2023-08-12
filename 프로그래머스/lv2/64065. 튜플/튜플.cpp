#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

vector<string> vec;

bool cmp(string a, string b) {
    return a.size() < b.size();
}

vector<string> split(string input, char delimiter) {
    vector<string> answer;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, delimiter)) {
        answer.push_back(temp);
    }

    return answer;
}

vector<int> solution(string s) {
    vector<int> answer;

    int toggle = 0;
    string temp = "";
    for (int i = 1; i < s.size() - 1; i++) {
        if (s[i] == '{') {
            toggle = 1;
        } else if (s[i] == '}') {
            toggle = 0;
            vec.push_back(temp);
            temp = "";
        } else {
            if (toggle == 1) {
                temp += s[i];
            }
        }
    }

    sort(vec.begin(), vec.end(), cmp);

    for (string tuple : vec) {
        vector<string> result = split(tuple, ',');
        for (string element : result) {
            int num = stoi(element);
            if (find(answer.begin(), answer.end(), num) == answer.end()) {
                answer.push_back(num);
            }
        }
    }

    return answer;
}
