#include <iostream>
using namespace std;

int main(void)
{
    int ans;
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int result;
    result = (x1*y2 + x2*y3 + x3*y1) - (x2*y1+x3*y2+x1*y3);
    
    if(result >0)ans = 1;
    else if(result <0)ans = -1;
    else ans = 0;
    
    cout<<ans;
    return 0;
}