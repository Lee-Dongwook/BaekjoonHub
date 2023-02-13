#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    
    for(int i=0;i<my_string.size();i++)
    {
        for(int j=1;j<=n;j++)
        {
            answer.push_back(my_string[i]);        
        }
    }
    
    return answer;
}

int main(void)
{
    string my_string;
    cin>>my_string;
    
    int n;
    cin>>n;
    
    string result = solution(my_string,n);
    cout<<result;
    
    return 0;
}