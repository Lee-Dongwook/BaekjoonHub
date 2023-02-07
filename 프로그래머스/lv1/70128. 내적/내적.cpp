#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    
    for(int i=0;i<a.size();i++)
    {
        answer += a[i]*b[i];
    }
    
    return answer;
}

int main(void)
{
    vector<int> a;
    vector<int> b;
    
    int num;
    while(cin>>num)
    {
        a.push_back(num);
    }
    int sum;
    while(cin>>sum)
    {
        b.push_back(sum);
    }
    
    int result = solution(a,b);
    cout<<result;
    return 0;
}