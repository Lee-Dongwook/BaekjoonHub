#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    cin >> s;
    
    for(char i = 'a'; i <= 'z'; i++)
    {
        auto iter = s.find(i);
        if(iter != string::npos){
            vec.push_back(iter);
        } else {
            vec.push_back(-1);
        }
    }
    
    for(int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    
    return 0;
}