#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    
    if(num % 2 == 0)
    {
        answer += "Even";
    }
    else if(num % 2 != 0)
    {
        answer += "Odd";
    }
    
    return answer;
}

int main(void)
{
    int a;
    cin>>a;
    
    string result = solution(a);
    cout<<result;
    
    return 0;
}