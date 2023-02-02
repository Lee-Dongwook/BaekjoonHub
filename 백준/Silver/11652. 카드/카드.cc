#include <bits/stdc++.h>
using namespace std;

int maxc = 0;
long long cnt,n,ans = 0;
map<long long, int> m;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>cnt;
    while(cnt--)
    {
        cin>>n;
        m[n]++;
    }
    for(auto t: m)
    {
        if(t.second > maxc)
        {
            maxc = t.second;
            ans = t.first;
        }
    }
    
    cout<<ans;
}