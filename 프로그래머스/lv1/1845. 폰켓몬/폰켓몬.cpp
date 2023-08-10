#include <vector>
#include <map>
#include <algorithm>
using namespace std;

map<int,int> m;

int solution(vector<int> nums)
{
    int answer = 0;
    
    int solution = 0;
    
    for(int i=0;i<nums.size();i++)
    {
        auto iter = m.find(nums[i]);
        if(iter != m.end())
        {
            iter->second += 1;
        }
        else{
            m.insert({nums[i],1});
        }
    }
    
    for(auto iter = m.begin(); iter != m.end(); iter++)
    {
        if(iter->second >= 1)
        {
           solution += 1;
        }
    }
    
    answer = min(solution, (int)(nums.size() / 2));
    
    return answer;
}