#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    
    int res = money / 5500;
    int ans = money - res*5500;
    
    answer.push_back(res);
    answer.push_back(ans);
    
    return answer;
}

int main(void)
{
    int money;
    cin>>money;
    
    vector<int> result = solution(money);
    cout<<result[0]<<","<<result[1];
    
    return 0;
}