#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == ' ')continue;
        
        else if(s[i] >='A' && s[i]<='Z')
        {
            if(s[i] + n <='Z')
               s[i] = s[i] + n;
            else
               s[i] = s[i] + n - 26;
        }
        else if(s[i] >= 'a' && s[i] <='z')
        {
            if(s[i]+n <= 'z')
            s[i] = s[i] + n ;
            else
              s[i] = s[i] + n - 26 ;
        }
        
    }
    answer = s;
    
    return answer;
}

int main(void)
{
    string s;
    getline(cin,s);
    
    int n;
    cin>>n;
    
    string result = solution(s,n);
    cout<<result;
    
    return 0;
    
}