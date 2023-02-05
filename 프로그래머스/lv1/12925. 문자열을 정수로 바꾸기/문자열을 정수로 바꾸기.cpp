#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    if(s[0] == '-')
    {
        int t = stoi(s);
        answer = t;
    }
    else
    {
        int k = stoi(s);
        answer = k;
    }
    
    return answer;
}

int main(void)
{
    string s;
    cin>>s;
    
    int result = solution(s);
    
    cout<<result;
    return 0;
}