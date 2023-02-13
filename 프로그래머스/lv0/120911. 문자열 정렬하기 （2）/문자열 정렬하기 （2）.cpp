#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string) {
    string answer = "";
    
    string k = "";
    for(int i=0;i<my_string.size();i++)
    {
        k+= tolower(my_string[i]);
    }
    
    sort(k.begin(),k.end());
    
    answer = k;
    
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