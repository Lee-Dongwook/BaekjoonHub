#include <vector>
#include <iostream>
#include <queue>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    queue<int>q;
    
    q.push(arr[0]);
    
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i] == q.back())
        {
            continue;
        }
        else
        {
            q.push(arr[i]);
        }
    }
    
    while(!q.empty())
    {
        int t= q.front();
        answer.push_back(t);
        q.pop();
    }
    
    return answer;
}

int main(void)
{
    vector<int> arr;
    int num;
    while(cin>>num)
    {
        arr.push_back(num);
    }
    
    vector<int>result = solution(arr);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<",";
    }
    
    return 0;
}