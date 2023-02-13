#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    
    char o = k + '0';
    for(int a= i; a<=j; a++)
    {
        string t = to_string(a);
        for(int i=0;i<t.size();i++)
        {
            if(t[i] == o)
            {
                answer++;
            }
        }
    }
    
    return answer;
}

int main(void)
{
    int i,j,k;
    
    int result = solution(i,j,k);
    cout<<result;
    return 0;
}