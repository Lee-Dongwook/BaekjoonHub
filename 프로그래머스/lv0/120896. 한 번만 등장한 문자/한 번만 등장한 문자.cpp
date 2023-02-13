#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int alphabet[26] = {0};

string solution(string s) {
    string answer = "";
    
    for(int i=0;i<s.size();i++)
    {
        alphabet[s[i]-'a']++;
    }
    
    vector<char> res;
    
    for(int i=0;i<26;i++)
    {
        if(alphabet[i] == 1)
        {
            res.push_back('a'+i);
        }
    }
    
    sort(res.begin(),res.end());
    
    for(int i=0;i<res.size();i++)
    {
        answer +=res[i];
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