#include <iostream>
#include <string>
#define MAX 987654321
using namespace std;

int N;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin>>N;
    
    int result = 0;
    int cnt = 0;
    
    for(int i=666; i < MAX; i++)
    {
        if(cnt == N){
            break;
        }
        
        string temp = to_string(i);
        
        if(temp.find("666") != string::npos)
        {
            result = stoi(temp);
            cnt++;
        }
    }
    
    
    cout<<result;
    
    return 0;
}