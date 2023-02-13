#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    int answer = n;
    
    for(int i=1;i<=t;i++)
    {
        answer += n;
        n *= 2;
    }
    
    return answer;
}

int main(void)
{
    int n,t;
    cin>>n>>t;
    
    int result = solution(n,t);
    cout<<result;
    
    return 0;
}