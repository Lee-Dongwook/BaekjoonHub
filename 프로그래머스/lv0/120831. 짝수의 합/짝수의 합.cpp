#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i=1;i<=n;i++)
    {
        if(i % 2 == 0)
        {
            answer += i;
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