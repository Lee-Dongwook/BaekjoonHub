#include <iostream>
#include <string>
#include <vector>
using namespace std;

int cnt = 0;

int solution(int num) {
    
    long long n = num;
    int answer = 0;
    
    if(n == 1)
    {
        answer = 0;
    }
    
    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n /= 2;
            cnt++;
        }
        else if (n % 2 == 1)
        {
            n *= 3;
            n += 1;
            cnt++;
        }
    }
    
    if(cnt < 500)
    {
        answer = cnt;
    }
    else
    {
        answer = -1;
    }
    
    return answer;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int num;
    cin>>num;
    
    int result = solution(num);
    cout<<result;
    return 0;
}
