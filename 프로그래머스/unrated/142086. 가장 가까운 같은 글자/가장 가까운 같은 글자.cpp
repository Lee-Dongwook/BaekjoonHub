#include <iostream>
#include <string>
#include <vector>
using namespace std;

int alphabet[26] = {0};
int index[26] = {0};

vector<int> solution(string s) {
    vector<int> answer;
    
    for(int i=0;i<s.size();i++)
    {
        if(alphabet[s[i]-'a'] == 0)
        {
            answer.push_back(-1);
            alphabet[s[i]-'a']++;
            index[s[i]-'a'] = i;
        }
        else if(alphabet[s[i]-'a'] != 0)
        {
            answer.push_back(i-index[s[i]-'a']);
            alphabet[s[i]-'a']++;
            index[s[i]-'a'] = i;
        }
    }
    
    
    return answer;
}

int main(void)
{
    string s;
    cin>>s;
    
    vector<int> result = solution(s);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<",";
    }
    
    return 0;
}