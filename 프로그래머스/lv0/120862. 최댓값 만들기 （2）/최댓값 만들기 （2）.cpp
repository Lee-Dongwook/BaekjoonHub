#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    sort(numbers.begin(), numbers.end());
    
    int a = numbers[0] * numbers[1];
    int b = numbers[numbers.size()-1] * numbers[numbers.size()-2];
    
    if(a >= b)
    {
        answer = a;
    }
    else
    {
        answer = b;
    }
    
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