#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<int>result;
    
    if(n < 3)
    {
        answer = n;
    }
    
    while(n >= 3)
    {
        int t = n % 3;
        result.push_back(t);
        
        n = n/3;
        
        if(n < 3)
        {
            result.push_back(n);
            break;
        }
        
    }
    
    int k = result.size();
    
    for(int i=0;i<result.size();i++)
    {
        answer += pow(3,k-1-i) * result[i];
    }
    
    
    return answer;
}

int main(void)
{
    int n;
    cin>>n;
    
    int result = solution(n);
    cout<<result;
    return 0;
}