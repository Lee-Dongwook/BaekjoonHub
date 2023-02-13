#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    
    for(int i=0;i<numlist.size();i++)
    {
        if(numlist[i] % n == 0)
        {
            answer.push_back(numlist[i]);
        }
    }
    
    return answer;
}

int main(void)
{
    int n;
    cin>>n;
    
    vector<int> numlist;
    int num;
    while(cin>>num)
    {
        numlist.push_back(num);
    }
    
    vector<int> result = solution(n,numlist);
    
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<",";
    }
    
    return 0;
}