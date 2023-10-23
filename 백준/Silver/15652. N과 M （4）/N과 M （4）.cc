#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> v;

void permutation(int start, int depth)
{
    if(v.size() == depth)
    {
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i] <<" ";
        }
        
        cout << "\n";
        
        return;
    }
    
    for(int i = start; i <= N; i++)
    {
        v.push_back(i);
        permutation(i,depth);
        v.pop_back();
    }
    
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    
    permutation(1,M);
    
    return 0;
}