#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

map<string,int> m;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    
    int temp = -1;
    
    int number = 0; 
    int order = 0;
    
    if(words[0].size() > 1)
    {
        m.insert({words[0],1});    
    }
    
    for(int i=1;i<words.size();i++)
    {
        if(words[i-1][words[i-1].size()-1] != words[i][0])
        {
            temp = i;
            break;
        }
        else{
            auto iter = m.find(words[i]);
            if(iter != m.end())
            {
                temp = i;
                break;
            }
            else if(words[i].size() <= 1)
            {
                temp = i;
                break;
            }
            else{
               m.insert({words[i],1});
               continue;   
            }
        }
    }
    
    if(temp != -1)
    {
        number = temp % n + 1;
        order = temp / n + 1;
    }
    
    answer.push_back(number);
    answer.push_back(order);
    
    return answer;
}