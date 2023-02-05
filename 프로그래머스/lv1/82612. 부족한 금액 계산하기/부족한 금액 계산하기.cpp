#include <iostream>
using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    
    long long t = 0;
    
    for(int i=1;i<=count;i++)
    {
        t += price * i;
    }
    
    if(money - t >= 0)
    {
        answer = 0;
    }
    else
    {
        answer = t - money;
    }
    
    return answer;
}

int main(void)
{
    int price;
    int money;
    int cnt;
    cin>>price>>money>>cnt;
    
    long long result = solution(price,money,cnt);
    cout<<result;
    return 0;
}