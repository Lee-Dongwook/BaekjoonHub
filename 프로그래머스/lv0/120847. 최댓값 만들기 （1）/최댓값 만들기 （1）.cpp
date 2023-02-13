#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    sort(numbers.begin(), numbers.end(), greater<>());
    
    answer += (numbers[0] * numbers[1]);
    
    return answer;
}

int main(void)
{
    vector<int> numbers;
    int num;
    while(cin>>num)
    {
        numbers.push_back(num);
    }
    
    int result = solution(numbers);
    cout<<result;
    return 0;
}