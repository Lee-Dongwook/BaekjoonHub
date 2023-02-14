#include <iostream>
#include <string>
#include <vector>

using namespace std;
int alphabet[58]={0};
string solution(string my_string) {
    string answer = "";
    
    for(int i=0;i<my_string.size();i++)
    {
        if(alphabet[my_string[i]-'A'] == 0)
        {
            answer += my_string[i];
            alphabet[my_string[i]-'A']++;
        }
        
        else continue;
    }
    
    return answer;
}

int main(void)
{
    string my_string;
    cin>>my_string;
    
    string result = solution(my_string);
    cout<<result;
    
    return 0;
}