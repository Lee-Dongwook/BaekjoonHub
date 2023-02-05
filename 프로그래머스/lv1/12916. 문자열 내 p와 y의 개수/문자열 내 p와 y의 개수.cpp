#include <string>
#include <iostream>
using namespace std;

int cnt = 0; // p, P 개수
int res = 0; // y, Y 개수

bool solution(string s)
{
    bool answer = true;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'p' || s[i] == 'P')
        {
            cnt++;
        }
        else if(s[i] == 'y' || s[i] == 'Y')
        {
            res++;
        }
        else continue;
    }
    
    if(cnt == res)
    {
        answer = true;
    }
    else
    {
        answer = false;
    }

    return answer;
}

int main(void)
{
    string s;
    cin>>s;
    
    bool t = solution(s);
    
    if(t)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    
    return 0;
}