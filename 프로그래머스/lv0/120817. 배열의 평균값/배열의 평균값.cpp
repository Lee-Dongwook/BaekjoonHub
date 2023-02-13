#include <iostream>
#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    
    int sum = 0;
    
    for(int i=0;i<numbers.size();i++)
    {
        sum += numbers[i];
    }
    
    answer = (double) sum / numbers.size();
    
    return answer;
}

int main(void)
{
    vector<int> ans;
    int num;
    while(cin>>num)
    {
        ans.push_back(num);
    }
    
    double result = solution(ans);
    cout<<fixed;
    cout.precision(1);
    cout<<result;
    
    return 0;
}