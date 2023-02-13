#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    
    int t = total/num + (1-num)/2;
    
    for(int i=0;i<=num-1;i++)
    {
        answer.push_back(t+i);
    }
    
    
    return answer;
}

int main(void)
{
    int num, total;
    cin>>num>>total;
    
    vector<int> result = solution(num,total);
    
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<",";
    }
    
    return 0;
}