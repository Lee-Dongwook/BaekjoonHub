#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    
    string k = to_string(order);
    for(int i=0;i<k.size();i++)
    {
        if(k[i] =='3' || k[i] == '6' || k[i] == '9')
        {
            answer ++;
        }
        else continue;
    }
    
    return answer;
}

int main(void)
{
    int order;
    cin>>order;
    
    int result = solution(order);
    cout<<result;
    
    return 0;
}