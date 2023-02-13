#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int answer = 0;
    
    if(dot[0] >0 && dot[1] > 0)
    {
        answer = 1;
    }
    else if (dot[0] < 0 && dot[1] > 0)
    {
        answer = 2;
    }
    else if (dot[0] <0 && dot[1] < 0)
    {
        answer = 3;
    }
    else if (dot[0] >0 && dot[1] < 0)
    {
        answer = 4;
    }
    
    
    return answer;
}

int main(void)
{
    vector<int> dot;
    int num;
    while(cin>>num)
    {
        dot.push_back(num);
    }
    
    int result = solution(dot);
    cout<<result;
    
    return 0;
}