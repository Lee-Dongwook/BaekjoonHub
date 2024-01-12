#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> vec;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string str;
    cin>> str;
    
    for(int i = 0; i < str.size(); i++)
    {
        string temp = str.substr(i);
        vec.push_back(temp);
    }
    
    sort(vec.begin(), vec.end());
    
    for(int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<"\n";
    }
    
    
    return 0;
}