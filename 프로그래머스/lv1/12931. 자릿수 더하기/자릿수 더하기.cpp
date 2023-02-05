#include <iostream>
#include <string>
using namespace std;
int solution(int n)
{
    int answer = 0;
    
    string temp = to_string(n);
    
    for(int i=0;i<temp.size();i++)
    {
        int t = temp[i] - '0';
        answer += t;
    }
   

    return answer;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin>>N;
    
    int result = solution(N);
    
    cout<<result;
    return 0;
}