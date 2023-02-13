
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price) {
    int answer = 0;
    
    double res = 0;
    if(price <100000)
    {
        res += price;
    }
    
    else if(price >=100000 && price<300000)
    {
        res += price * 0.95;
    }
    else if(price >= 300000 && price <500000)
    {
        res += price * 0.9;
    }
    else if(price >= 500000)
    {
        res += price * 0.8;
    }
    
    int ans = floor(res);
    
    
    answer = ans;
    return answer;
}

int main(void)
{
    int price;
    scanf("%d",&price);
    
    int result = solution(price);
    printf("%d",result);
    
    return 0;
}