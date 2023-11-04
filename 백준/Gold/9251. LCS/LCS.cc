#include <iostream>
#include <algorithm>
using namespace std;

string a,b;

int dp[1001][1001];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> a >> b;
    
    for(int i = 1; i <= a.size(); i++)
    {
        for(int j = 1; j <= b.size(); j++)
        {
            if(a[i-1] == b[j-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = max(dp[i][j-1], max(dp[i-1][j], dp[i-1][j-1]));    
            }
            
        }
    }
    
    cout<<dp[a.size()][b.size()];
    
    return 0;
}