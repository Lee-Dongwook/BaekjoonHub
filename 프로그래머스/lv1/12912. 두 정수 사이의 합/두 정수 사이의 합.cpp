#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    if(a == b)
    {
        answer = a;
    }
    else if (a > b)
    {
        for(int i=b;i<=a;i++)
        {
            answer += i;
        }
    }
    else if( b > a)
    {
        for(int i=a;i<=b;i++)
        {
            answer += i;
        }
    }
    
    return answer;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a,b;
    cin>>a>>b;
    
    long long result = solution(a,b);
    cout<<result;
    return 0;
}