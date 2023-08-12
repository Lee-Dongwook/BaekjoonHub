#include <string>
#include <vector>
#include <map>
using namespace std;

map<string, int> m;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    for(int i=0;i<participant.size();i++)
    {
        auto iter = m.find(participant[i]);
        if(iter != m.end())
        {
          iter->second += 1;          
        }
        else{
          m.insert({participant[i],1});
        }
    }
    
    for(int i=0;i<completion.size();i++)
    {
        auto iter = m.find(completion[i]);
        if(iter != m.end())
        {
            iter->second -= 1;
        }
    }
    
    for(auto iter = m.begin(); iter != m.end();iter++)
    {
        if(iter->second > 0)
        {
            answer = iter->first;
        }
    }
    
    return answer;
}