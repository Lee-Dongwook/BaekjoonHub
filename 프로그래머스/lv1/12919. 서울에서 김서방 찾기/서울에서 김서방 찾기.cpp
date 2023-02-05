#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    
    int x= 0;
    
    for(int i=0;i<seoul.size();i++)
    {
        if(seoul[i] == "Kim")
        {
            x = i;
            break;
        }
    }
    
    string c = to_string(x);
    answer += "김서방은 ";
    answer += c;
    answer += "에 있다";
    
    return answer;
}

int main(void)
{
    vector<string> seoul;
    seoul.resize(1000);
    
    string c;
    while(cin>>c)
    {
        seoul.push_back(c);
    }
    
    string result = solution(seoul);
    cout<<result;
    return 0;
}