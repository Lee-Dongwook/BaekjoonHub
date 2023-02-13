#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    
    if((common[2] - common[1]) == (common[1] - common[0])) //등차수열
    {
        int t= common[1] - common[0];
        answer = common[common.size()-1] + t;
    } 
    else if((common[2] / common[1]) == (common[1] / common[0])) //등비수열
    {
        int k = common[1] / common[0];
        answer = common[common.size()-1] * k;
    }
    return answer;
}

int main(void)
{
    vector<int> common;
    int num;
    while(cin>>num)
    {
        common.push_back(num);
    }
    
    int result = solution(common);
    cout<<result;
    
    return 0;
}