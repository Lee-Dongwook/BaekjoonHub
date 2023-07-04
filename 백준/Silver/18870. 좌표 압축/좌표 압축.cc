#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<int> pre;
vector<int> vec;
map<int, int> m;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin>>N;
    
    while(N--)
    {
        int num;
        cin>>num;
        pre.push_back(num);
        vec.push_back(num);
    }
    
    sort(vec.begin(),vec.end());
    
    static int a = 0;
    
    for(int i=0;i<vec.size();i++)
    {
        auto iter = m.find(vec[i]);
        if(iter != m.end())
        {
            continue;
        }
        else{
            m.insert({vec[i],a});
            a++;
        }
    }
    
    for(int i=0;i<pre.size();i++)
    {
        auto iter = m.find(pre[i]);
        if(iter != m.end())
        {
            cout<<iter->second<<" ";
        }
    }
    
    return 0;
}