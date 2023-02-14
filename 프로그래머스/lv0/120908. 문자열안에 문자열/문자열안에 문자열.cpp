#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 1;
    
    if(str1.find(str2)==string::npos)
    {
        answer = 2;
    }
    
    return answer;
}

int main(void)
{
    string str1,str2;
    cin>>str1>>str2;
    
    int result = solution(str1,str2);
    cout<<result;
    
    return 0;
}