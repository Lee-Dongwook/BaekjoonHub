#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    
    string k = to_string(age);
    for(int i=0;i<k.size();i++)
    {
        if(k[i] == '0')
        {
            answer += 'a';
        }
         if(k[i] == '1')
        {
            answer += 'b';
        }
         if(k[i] == '2')
        {
            answer += 'c';
        }
         if(k[i] == '3')
        {
            answer += 'd';
        }
         if(k[i] == '4')
        {
            answer += 'e';
        }
         if(k[i] == '5')
        {
            answer += 'f';
        }
         if(k[i] == '6')
        {
            answer += 'g';
        }
         if(k[i] == '7')
        {
            answer += 'h';
        }
         if(k[i] == '8')
        {
            answer += 'i';
        }
         if(k[i] == '9')
        {
            answer += 'j';
        }
        
    }
    
    return answer;
}

int main(void)
{
    int age;
    cin>>age;
    
    string result = solution(age);
    cout<<result;
    
    return 0;
}