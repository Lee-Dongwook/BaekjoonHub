#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string message) {
    int answer = 0;
    
    answer += message.size() * 2;
    
    return answer;
}

int main(void)
{
    string message;
    cin>>message;
    
    int result = solution(message);
    cout<<result;
    
    return 0;
}