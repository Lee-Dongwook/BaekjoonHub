#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    string k = to_string(n);
    for(int i=0;i<k.size();i++)
    {
        int t = k[i] - '0';
        answer += t;
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