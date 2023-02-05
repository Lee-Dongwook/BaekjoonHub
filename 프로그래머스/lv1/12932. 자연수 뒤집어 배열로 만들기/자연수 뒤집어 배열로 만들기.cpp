#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
    string k = to_string(n);
    
    reverse(k.begin(),k.end());
        
    for(int i=0;i<k.size();i++)
    {
        int t = k[i] - '0';
        answer.push_back(t);
    }
    
    return answer;
}

int main(void)
{
    long long num;
    cin>>num;
    
    vector<int> rec = solution(num);
    
    for(int i=0;i<rec.size();i++)
    {
        cout<<rec[i]<<",";
    }
    
    return 0;
}