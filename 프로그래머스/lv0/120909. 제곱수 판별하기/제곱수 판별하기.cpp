#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 2;
    
    for(int i=1;i*i<=n;i++)
    {
        if(i * i == n)
        {
            answer = 1;
        }
    }
    
    
    return answer;
}

int main(void)
{
    int n;
    cin>>n;
    
    int result = solution(n);
    cout<<result;
    
    return 0;
}