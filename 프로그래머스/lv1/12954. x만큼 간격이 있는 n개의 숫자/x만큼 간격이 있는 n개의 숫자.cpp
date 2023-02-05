#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    
    for(int i=0;i<n;i++)
    {
        int t = x + x * i;
        answer.push_back(t);
    }
    
    return answer;
}

int main(void)
{
    int x,n;
    cin>>x>>n;
    
    vector<long long> result = solution(x,n);
    
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<",";
    }
    
    return 0;
}