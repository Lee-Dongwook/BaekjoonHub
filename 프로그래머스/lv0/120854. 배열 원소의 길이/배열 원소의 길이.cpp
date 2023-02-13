#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    
    for(int i=0;i<strlist.size();i++)
    {
        int t = strlist[i].size();
        
        answer.push_back(t);
    }
    
    return answer;
}

int main(void)
{
    vector<string> strlist;
    string s;
    while(cin>>s)
    {
        strlist.push_back(s);
    }
    
    vector<int> result = solution(strlist);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<",";
    }
    
    return 0;
}