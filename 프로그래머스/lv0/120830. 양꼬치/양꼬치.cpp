#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    
    int service = n/10;
    
    answer += n * 12000;
    
    answer += (k-service) * 2000;
    
    
    return answer;
}

int main(void)
{
    int n,k;
    cin>>n>>k;
    
    int result = solution(n,k);
    cout<<result;
}