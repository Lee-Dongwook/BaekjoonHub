#include <iostream>
using namespace std;

int N;
int column[15];
int cnt = 0;

bool ischecked(int height)
{
    for(int i = 0; i < height; i++)
    {
        if(column[height] == column[i] || height - i == abs(column[height] - column[i]))
        {
            return false;
        }
        
    }
    
    return true;
}

void Nqueen(int start)
{
    if(start == N)
    {
       cnt++;
       return;
    }
    
    for(int j = 0; j < N; j++)
    {
        column[start] = j;
        
        if(ischecked(start))
        {
            Nqueen(start + 1);
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin>>N;
    Nqueen(0);
    cout<<cnt;
    
    return 0;
}