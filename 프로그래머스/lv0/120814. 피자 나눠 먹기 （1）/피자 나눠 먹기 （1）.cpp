#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    if(n<7)
    {
        answer = 1;
    }
    else
    {
     if(n % 7 == 0)
     {
        answer += n/7;
     }
     else if(n % 7 != 0)
     {
         answer += (n/7+1);
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