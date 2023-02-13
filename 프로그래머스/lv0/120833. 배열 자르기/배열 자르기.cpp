#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer;
    
    for(int i=num1; i<=num2; i++)
    {
        answer.push_back(numbers[i]);
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
    
    int num1, num2;
    cin>>num1>>num2;
    
    vector<int>result = solution(numbers,num1,num2);
    for(int i=01;i<result.size();i++)
    {
        cout<<result[i]<<",";
    }
    
    return 0;
}