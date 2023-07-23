#include <iostream>
#include <vector>
using namespace std;

vector<pair<int,int>>vec[41];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    vec[0].push_back(make_pair(1,0));
    vec[1].push_back(make_pair(0,1));
    vec[2].push_back(make_pair(1,1));
    
    for(int i=3;i<=40;i++)
    {
        vec[i].push_back(make_pair((vec[i-1][0].first + vec[i-2][0].first),(vec[i-1][0].second + vec[i-2][0].second)));
    }
    
    
    int T;
    cin>>T;
    
    while(T--)
    {
        int num;
        cin>>num;
        cout<<vec[num][0].first<<" "<<vec[num][0].second<<"\n";
    }
    
    return 0;
}