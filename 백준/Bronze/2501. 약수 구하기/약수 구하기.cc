#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N,K;
    cin>>N>>K;
    
    for(int i=1;i<=N;i++)
    {
        if(N % i == 0)
        {
            vec.push_back(i);
        }
        else{
            continue;
        }
    }
    
    sort(vec.begin(),vec.end());
    
    if(vec.size()>= K){
      cout<<vec[K-1];
    }
    else{
        cout<<0;
    }
    
    return 0;
    
}