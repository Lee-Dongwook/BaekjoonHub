#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    
    for(int i=0;i<my_string.size();i++)
    {
        if(my_string[i] == letter[0])continue;
        answer += my_string[i];
    }
    
    return answer;
}

int main(void)
{
    string my_string;
    cin>>my_string;
    
    string letter;
    cin>>letter;
    
    string result = solution(my_string,letter);
    cout<<result;
    return 0;
}