#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

map<int, int> win;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    
    for(int i=0;i<win_nums.size();i++)
    {
        win.insert({win_nums[i],1});
    }
    
    int min = 0;
    int zero = 0;
    
    for(int i=0;i<lottos.size();i++)
    {
        if(lottos[i] == 0)
        {
            zero++;
        }
    }
    
    for(int i=0;i<lottos.size(); i++)
    {
        auto iter = win.find(lottos[i]);
        if(iter != win.end())
        {
            min ++;
        }
        else{
            continue;
        }
    }
    
    int max = min + zero;
    
    switch(min)
    {
        case 6:
        answer.push_back(1);
        break;
        
        case 5:
        answer.push_back(2);
        break;
            
        case 4:
        answer.push_back(3);
        break;
        
        case 3:
        answer.push_back(4);
        break;
        
        case 2:
        answer.push_back(5);
        break;
        
        default:
        answer.push_back(6);
    }
    
     switch(max)
    {
        case 6:
        answer.push_back(1);
        break;
        
        case 5:
        answer.push_back(2);
        break;
            
        case 4:
        answer.push_back(3);
        break;
        
        case 3:
        answer.push_back(4);
        break;
        
        case 2:
        answer.push_back(5);
        break;
        
        default:
        answer.push_back(6);
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}