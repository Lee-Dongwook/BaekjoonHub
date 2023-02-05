#include <iostream>
#include <string>
#include <vector>
using namespace std;

int cnt = 0;

string solution(string phone_number) {
    string answer = "";
    
    cnt = phone_number.size()-4;
    
    for(int i=0;i<cnt;i++)
    {
        answer += '*';
    }
    for(int i=cnt; i<phone_number.size();i++)
    {
        answer += phone_number[i];
    }
    
    
    return answer;
}

int main(void)
{
    string s;
    cin>>s;
    
    string result = solution(s);
    cout<<result;
    return 0;
}