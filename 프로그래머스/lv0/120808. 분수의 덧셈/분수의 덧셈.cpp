#include <iostream>
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    int c;
    while(b!=0)
    {
        c = a%b;
        a = b;
        b = c;
    }
    
    return a;
}

int lcm(int a, int b)
{
    return a*b / gcd(a,b);
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
    if(denom1 == denom2)
    {
        int res = numer1 + numer2;
        
        int t = gcd(res,denom1);
        if(t == 1)
        {
            answer.push_back(res);
            answer.push_back(denom1);
        }
        else if(t>1)
        {
            answer.push_back(res/t);
            answer.push_back(denom1/t);
        }
        
    }
    else if((denom1 >= denom2) && (denom1 % denom2 == 0))
    {
       int res = numer1 + numer2 * (denom1/denom2);
       int t = gcd(res, denom1);
       if(t == 1)
       {
           answer.push_back(res);
           answer.push_back(denom1);
       }
       else if (t>1)
       {
           answer.push_back(res/t);
           answer.push_back(denom1/t);
       }
    }
    else if((denom2>=denom1) && (denom2 % denom1 == 0))
    {
        int res = numer2 + numer1 * (denom2/denom1);
        int t = gcd(res,denom2);
        if(t == 1)
        {
            answer.push_back(res);
            answer.push_back(denom2);
        }
        else if(t>1)
        {
            answer.push_back(res/t);
            answer.push_back(denom2/t);
        }
    }
    else
    {
        int ans = lcm(denom1,denom2);
        int res = numer1 * (ans / denom1) + numer2 * (ans / denom2);
        
        int t = gcd(res,ans);
        if(t == 1)
        {
            answer.push_back(res);
            answer.push_back(ans);
        }
        else if(t>1)
        {
            answer.push_back(res/t);
            answer.push_back(ans/t);
        }
    }
    
    return answer;
}

int main(void)
{
    int numer1,denom1,numer2,denom2;
    cin>>numer1>>denom1>>numer2>>denom2;
    
    vector<int>result = solution(numer1,denom1,numer2,denom2);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<",";
    }
    
    return 0;
}