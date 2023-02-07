#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    if(s.size() % 2 == 0)
    {
        answer += s[(s.size()-1)/2];
        answer += s[(s.size()-1)/2 + 1];
    }
    else if(s.size() % 2 == 1)
    {
        answer = s[(s.size()-1)/2];
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