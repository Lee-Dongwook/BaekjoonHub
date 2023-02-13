#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    
    for(int i=0;i<s1.size();i++)
    {
        for(int j=0;j<s2.size();j++)
        {
            if(s1[i] == s2[j])
            {
                answer++;
            }
            else continue;
        }
    }
    
    return answer;
}

int main(void)
{
    vector<string> s1;
    string a;
    while(cin>>a)
    {
        s1.push_back(a);
    }
    
    vector<string> s2;
    string b;
    while(cin>>b)
    {
        s2.push_back(b);
    }
    
    int result = solution(s1,s2);
    cout<<result;
    
    return 0;
}