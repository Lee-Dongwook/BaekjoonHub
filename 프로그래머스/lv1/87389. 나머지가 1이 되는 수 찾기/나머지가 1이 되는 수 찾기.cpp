#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i=1;i<=n;i++)
    {
        if(n % i == 1)
        {
            answer = i;
            break;
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