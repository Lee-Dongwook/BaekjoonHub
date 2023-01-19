#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

static int parent[3001];
static int L[3001][4];
static int N;

int find(int i);
void Union(int i, int j);
int CCW(long x1, long y1, long x2, long y2, long x3, long y3);
bool isOverlab(long x1, long y1, long x2, long y2, long x3, long y3, long x4, long y4);
bool isCross(long x1, long y1, long x2, long y2, long x3, long y3, long x4, long y4);

int main(void)
{
    cin >> N;
    for(int i=1;i<=N;i++)
    {
        parent[i] = -1;
    }
    for(int i=1;i<=N;i++)
    {
        cin>>L[i][0]>>L[i][1]>>L[i][2]>>L[i][3];
        
        for(int j=1; j<i; j++)
        {
            if(isCross(L[i][0], L[i][1], L[i][2], L[i][3], L[j][0], L[j][1], L[j][2], L[j][3]) == true)
            {
                Union(i,j);
            }
        }
    }
    
    int ans = 0, res = 0;
    for(int i=1; i<=N;i++)
    {
        if(parent[i] < 0)
        {
            ans++;
            res = min(res,parent[i]);
        }
    }
    cout<<ans<<"\n";
    cout<<-res<<"\n";
    return 0;
}

int find(int i)
{
    if(parent[i] <0)
    {
        return i;
    }
    return parent[i] = find(parent[i]);
}

void Union(int i, int j)
{
    int p = find(i);
    int q = find(j);
    
    if(p == q)
        return;
    parent[p] += parent[q];
    parent[q] = p;
}

int CCW(long x1, long y1, long x2, long y2, long x3, long y3)
{
    long temp = (x1*y2 + x2*y3 + x3*y1) - (x2*y1 + x3*y2 + x1*y3);
    if(temp > 0)
    {
        return 1;
    }
    else if(temp < 0)
    {
        return -1;
    }
    return 0;
}

bool isOverlab(long x1, long y1, long x2, long y2, long x3, long y3, long x4, long y4)
{
    if(min(x1,x2) <= max(x3,x4) && min(x3,x4) <= max(x1,x2) && min(y1,y2) <= max(y3,y4) && min(y3,y4) <= max(y1,y2))
    {
        return true;
    }
    return false;
}

bool isCross(long x1, long y1, long x2, long y2, long x3, long y3, long x4, long y4)
{
    int abc = CCW(x1,y1,x2,y2,x3,y3);
    int abd = CCW(x1,y1,x2,y2,x4,y4);
    int cda = CCW(x3,y3,x4,y4,x1,y1);
    int cdb = CCW(x3,y3,x4,y4,x2,y2);
    
    if(abc * abd == 0 && cda * cdb == 0)
    {
        return isOverlab(x1,y1,x2,y2,x3,y3,x4,y4);
    }
    else if(abc * abd <=0 && cda * cdb <= 0)
    {
        return true;
    }
    
    return false;
}