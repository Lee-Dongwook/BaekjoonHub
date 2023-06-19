#include <iostream>
using namespace std;

int main(void)
{
    int a,b;
    cin>>a>>b;
    cout<<fixed;
    cout.precision(9);
    
    double result =(double)a / b;
    cout<<result;
    return 0;
}