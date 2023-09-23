#include <iostream>
using namespace std;

long long DP[1001];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin>>n;
    
    DP[0] = 0;
    DP[1] = 1;
    DP[2] = 2;
    
    for(int i = 3; i <=n; i++)
    {
        DP[i] = (DP[i-1] % 10007 + DP[i-2] % 10007) % 10007;
    }
    
    cout<<DP[n];
    
    return 0;
}