#include <iostream>
#include <string>
#include <vector>
using namespace std;

int cnt = 0;

bool solution(int x) {
    bool answer = true;
    
    string k = to_string(x);
    for(int i=0;i<k.size();i++)
    {
        int t = k[i] - '0';
        cnt += t;
    }
    
    if(x % cnt == 0)
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
    int num;
    cin>>num;
    
    bool res = solution(num);
    
    if(res)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";    
    }

return 0;
}