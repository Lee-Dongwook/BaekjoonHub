#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    for(int i=1;i<=n;i++)
    {
        if(i % 2 ==1)
        {
            answer.push_back(i);
        }
    }
    
    
    return answer;
}

int main(void)
{
    int n;
    cin>>n;
    
    vector<int> result = solution(n);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<",";
    }
    
    return 0;
}