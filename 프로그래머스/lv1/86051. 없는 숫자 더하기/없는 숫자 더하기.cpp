#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

map<int,int>m;

int solution(vector<int> numbers) {
    int answer = 0;
    
    for(int i=0;i<numbers.size();i++)
    {
        m.insert(make_pair(numbers[i],1));
    }
    
    for(int i=0;i<=9;i++)
    {
        for(auto iter = m.begin(); iter != m.end(); iter++)
        {
            if(m.find(i) != m.end())
            {
               answer += i;
                break;
            }
        }
    }
    
    answer = 45 - answer;
    
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