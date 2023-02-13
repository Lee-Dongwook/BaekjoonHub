#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = n-1;
    
    int cnt = 0;
    
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
            answer--;
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