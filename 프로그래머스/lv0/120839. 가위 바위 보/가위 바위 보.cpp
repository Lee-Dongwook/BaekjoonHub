#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    
    for(int i=0;i<rsp.size();i++)
    {
        if(rsp[i] == '2')
        {
            answer += '0';
        }
        else if(rsp[i] == '0')
        {
            answer += '5';
        }
        else if(rsp[i] == '5')
        {
            answer +='2';
        }
    }
    
    
    return answer;
}

int main(void)
{
    string rsp;
    cin>>rsp;
    
    string result = solution(rsp);
    cout<<result;
    
    return 0;
}