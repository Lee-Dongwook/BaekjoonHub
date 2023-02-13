#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    
    int a = hp / 5;
    
    hp -= a*5;
    
    int b = hp / 3;
    
    hp -= b * 3;
    
    int c = hp;
    
    answer = a+b+c;
    
    return answer;
}

int main(void)
{
    int hp;
    cin>>hp;
    
    int result = solution(hp);
    cout<<result;
    
    return 0;
}