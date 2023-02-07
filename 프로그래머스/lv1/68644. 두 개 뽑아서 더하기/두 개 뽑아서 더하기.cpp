#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> result;
    vector<int> answer;
    
    for(int i=0;i<numbers.size();i++)
    {
        for(int j=i+1;j<numbers.size();j++)
        {
            int t = numbers[i] + numbers[j];
            result.push_back(t);
        }
    }
    
    sort(result.begin(),result.end());
    
    answer.push_back(result[0]);
    for(int i=1;i<result.size();i++)
    {
        if(result[i-1] != result[i])
        answer.push_back(result[i]);
    }
    
   
   
    return answer;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int> numbers;
    int num;
    while(cin>>num)
    {
        numbers.push_back(num);
    }
    
    vector<int> result = solution(numbers);
    
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<",";
    }
    
    return 0;
}