#include <iostream>
using namespace std;

int main(void)
{
    int a1,b1,a2,b2,a3,b3;
    cin>>a1>>b1>>a2>>b2>>a3>>b3;
    
    int res = (a1 * b2 + a2 * b3 + a3 * b1) - (a2 * b1 + a3 * b2 + a1 * b3);
    
    int ans = 0;
    
    if(res > 0)
    {
       ans = 1;
    }
    else if(res < 0)
    {
        ans = -1;
    }
    else{
        ans = 0;
    }
    
    cout<<ans;
    return 0;
}