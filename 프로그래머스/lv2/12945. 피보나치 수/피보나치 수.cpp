#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int ans[100001] = {0};
    
    ans[0] = 1;
    ans[1] = 1;
    
    for(int i=2; i<=n;i++){
        
            ans[i] = ans[i-1] + ans[i-2];
            ans[i] %= 1234567;
        
    }
    
    answer = ans[n-1];
    
    return answer;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin>>n;
    
    int result = solution(n);
    
    cout<<result;
    
    return 0;
}