#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a;
    int b;
    cin >> a >> b;
    
    int **p;
    p = new int *[b];
    for(int i=0;i<b;i++)
    {
        p[i] = new int[a];
    }
    
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<a;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    for(int i=0;i<b;i++)delete[] p[i];
    delete[] p;
    return 0;
}