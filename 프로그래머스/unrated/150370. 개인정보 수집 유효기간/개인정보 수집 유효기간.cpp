#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

map<string,int> period;

vector<string> split(string input, char delimiter)
{
    vector<string> answer;
    stringstream ss(input);
    string temp;
    
    while(getline(ss,temp,delimiter))
    {
        answer.push_back(temp);
    }
    
    return answer;
}


vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;

    vector<string> to = split(today, '.');

    int today_year = stoi(to[0]);
    int today_month = stoi(to[1]);
    int today_day = stoi(to[2]);

    // 약관 종류
    for (int i = 0; i < terms.size(); i++) {
        vector<string> temp = split(terms[i], ' ');
        period.insert({temp[0], stoi(temp[1])});
    }

    // 개인정보
    for (int i = 0; i < privacies.size(); i++) {
        vector<string> temp = split(privacies[i], ' ');
        vector<string> date = split(temp[0], '.');

        int limit = 0;
        auto iter = period.find(temp[1]);
        limit = iter->second;

        int year = stoi(date[0]);
        int month = stoi(date[1]);
        int day = stoi(date[2]);

        // 유효기간 계산
        year += (month + limit - 1) / 12; // 개월 수가 12를 넘어가면 연도를 증가
        month = (month + limit - 1) % 12 + 1; // 개월 수 계산 후, 1부터 12 사이의 값으로 보정

        // 날짜 비교
        if (year > today_year) {
            continue;
        } else if (year < today_year) {
            answer.push_back(i + 1);
        } else if (month > today_month) {
            continue;
        } else if (month < today_month) {
            answer.push_back(i + 1);
        } else if (day <= today_day) {
            answer.push_back(i + 1);
        }
    }

    sort(answer.begin(), answer.end());

    return answer;
}