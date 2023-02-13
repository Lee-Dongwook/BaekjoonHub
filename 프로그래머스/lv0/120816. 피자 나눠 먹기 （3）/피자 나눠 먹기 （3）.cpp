#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    
    if(n < slice)
    {
        answer = 1;
    }
    else
    {
        if(n % slice == 0)
        {
            answer = n/slice;
        }
        else
        {
            answer = n/slice + 1;
        }
    }
    
    return answer;
}

int main(void)
{
    int slice, n;
    cin>>slice>>n;
    
    int result = solution(slice, n);
    cout<<result;
    
    return 0;
}