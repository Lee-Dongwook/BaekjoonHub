#include <iostream>
#include <string>
#include <vector>

using namespace std;

int Combination(int n, int r)
{
    if(n == r || n == 1 || r == 0)
    {
        return 1;
    }
    
    return Combination(n-1,r-1) + Combination(n-1,r);
}

int solution(int balls, int share) {
    int answer = 0;
    
    answer = Combination(balls,share);
    
    return answer;
}

int main(void)
{
    int balls,share;
    cin>>balls>>share;
    
    int result = solution(balls,share);
    cout<<result;
    
    return 0;
}