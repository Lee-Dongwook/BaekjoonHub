#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {
    string answer = "";
    
    char t = my_string[num1];
    my_string[num1] = my_string[num2];
    my_string[num2] = t;
    
    
    answer = my_string;
    
    return answer;
}

int main(void)
{
    string my_string;
    int num1;
    int num2;
    cin>>my_string>>num1>>num2;
    
    string result = solution(my_string,num1,num2);
    cout<<result;
    
    return 0;
}