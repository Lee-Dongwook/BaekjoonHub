#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    
    sort(d.begin(),d.end());
    
    int sum = 0;
    
    for(int i=0;i<d.size();i++)
    {
        if(sum < budget)
        {
            sum += d[i];
            if(sum <=budget)
            {
                 answer++;
            }
            else break;
        }
        else break;
    }
    
    return answer;
}

int main(void)
{
    vector<int> d;
    int budget;
    
    int num;
    while(cin>>num)
    {
        d.push_back(num);
    }
    
    cin>>budget;
    
    int result = solution(d,budget);
    
    cout<<result;
    
    return 0;
}