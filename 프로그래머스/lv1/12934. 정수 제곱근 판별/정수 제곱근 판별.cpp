#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    double res = sqrt(n);
    
    int i = res / 1;
    
    if(res - (double)i != 0.0)
    {
        answer = -1;
    }
    else if(res - i == 0.0)
    {
        answer = (res+1)*(res+1);
    }
    
    return answer;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long n;
    cin>>n;
    
    long long result = solution(n);
    cout<<result;
    return 0;
}