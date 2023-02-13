#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    
    string n =to_string(num);
    char t = k + '0';
    
    for(int i=0;i<n.size();i++)
    {
        if(n[i] == t)
        {
            answer = i+1;
            break;
        }
        answer = -1;
    }
    
    return answer;
}

int main(void)
{
    int num,k;
    cin>>num>>k;
    
    int result = solution(num,k);
    cout<<result;
    return 0;
}