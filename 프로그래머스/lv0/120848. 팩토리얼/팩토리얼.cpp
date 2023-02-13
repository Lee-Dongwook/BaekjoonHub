#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int a = 1;
    int b = 1 * 2;
    int c = 1 * 2 * 3;
    int d = 1 * 2 * 3 * 4;
    int e = 1 * 2 * 3 * 4 * 5;
    int f = 1 * 2 * 3 * 4 * 5 * 6;
    int g = 1 * 2 * 3 * 4 * 5 * 6 * 7;
    int h = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8;
    int i = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9;
    int j = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10;
    
    if(n>=a && n<b)
    {
        answer = 1;
    }
    else if(n>=b && n<c)
    {
        answer = 2;
    }
    else if(n>=c &&  n<d)
    {
        answer = 3;
    }
    else if (n>=d && n<e)
    {
        answer = 4;
    }
    else if (n>=e && n<f)
    {
        answer = 5;
    }
    else if (n>=f && n<g)
    {
        answer = 6;
    }
    else if (n>=g && n<h)
    {
        answer = 7;
        
    }
    else if (n>=h && n<i)
    {
        answer = 8;
    }
    else if (n>=i && n<j)
    {
        answer = 9;
    }
    else
    {
        answer = 10;
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