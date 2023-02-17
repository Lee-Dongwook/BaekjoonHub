#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split(string str, char delimiter)
{
    istringstream iss(str);
    string buffer;
    vector<string> result;
    
    while(getline(iss,buffer,delimiter))
    {
        result.push_back(buffer);
    }
    
    return result;
}

string solution(string s) {
    string answer = "";
    
    vector<string> res = split(s,' ');
    
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            if(j % 2 == 0)
            {
                res[i][j] = toupper(res[i][j]);
            }
            else if( j % 2 == 1)
            {
                res[i][j] = tolower(res[i][j]);
            }
        }
    }
    
    if(s[s.size()-1] != ' ')
    {
    for(int i=0;i<res.size()-1;i++)
    {
        answer += res[i];
        answer += " ";
    }
    answer += res[res.size()-1];
    }
    else
    {
        for(int i=0;i<res.size();i++)
        {
            answer += res[i];
            answer += " ";
        }
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