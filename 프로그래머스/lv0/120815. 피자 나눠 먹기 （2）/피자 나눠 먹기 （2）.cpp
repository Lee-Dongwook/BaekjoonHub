#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int t = 1;
    
    while(1)
    {
        if((n * t) % 6 == 0)
        {   
            answer = (n*t)/6;
            break;
        }
        t++;
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