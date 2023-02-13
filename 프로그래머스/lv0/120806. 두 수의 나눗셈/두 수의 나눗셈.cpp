#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    
    double res = (double) num1 / num2;
    
    double ans = res * 1000.0;
    
    double se = ans / 1.0;
    
    answer = (int)se;
    
    return answer;
}

int main(void)
{
    int num1,num2;
    cin>>num1>>num2;
    
    int result = solution(num1,num2);
    cout<<result;
}