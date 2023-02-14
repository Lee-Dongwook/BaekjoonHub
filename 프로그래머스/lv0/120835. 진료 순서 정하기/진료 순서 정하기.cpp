#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    
    vector<int> temp;
    
    for(int i=0;i<emergency.size();i++)
    {
        temp.push_back(emergency[i]);
    }
    
    sort(temp.begin(),temp.end(), greater<>());
    
    for(int i=0;i<emergency.size();i++)
    {
        int k = emergency[i];
        
        for(int j=0;j<temp.size();j++)
        {
            if(temp[j] == k)
            {
                answer.push_back(j+1);
            }
        }
    }
    
    return answer;
}

int main(void)
{
    vector<int> emergency;
    int num;
    while(cin>>num)
    {
        emergency.push_back(num);
    }
    
    vector<int> result = solution(emergency);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<",";
    }
    
    return 0;
}