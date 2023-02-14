#include <iostream>
#include <string>
#include <vector>
using namespace std;
int cnt = 0;
vector<int> prime;

vector<int> solution(int n) {
    vector<int> answer;
    
    for(int i=1;i<=n;i++)
    {
        cnt = 0;
        for(int j=1;j<=i;j++)
        {
            if(i % j == 0)
            {
                cnt++;
            }
        }
        if(cnt == 2)
        {
            prime.push_back(i);
        }
    }
    
    for(int i=0;i<prime.size();i++)
    {
        if(n % prime[i] == 0)
        {
            answer.push_back(prime[i]);
            n /= prime[i];
        }
        else continue;
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