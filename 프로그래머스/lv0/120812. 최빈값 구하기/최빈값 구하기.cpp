#include <iostream>
#include <string>
#include <vector>

using namespace std;

int number[1000]={0};

int solution(vector<int> array) {
    int answer = 0;
    
    for(int i=0;i<array.size();i++)
    {
        number[array[i]]++;
    }
    
    int max = -1;
    
    for(int i=0;i<1000;i++)
    {
        if(number[i] > max)
        {
            max = number[i];
        }
    }
    
    vector<int> list;
    
    for(int i=0;i<1000;i++)
    {
        if(number[i] == max)
        {
            list.push_back(i);
        }
    }
    
    if(list.size()>1)
    {
        answer = -1;
    }
    else
    {
        answer = list[0];
    }
    
    return answer;
}

int main(void)
{
    vector<int> array;
    int num;
    while(cin>>num)
    {
        array.push_back(num);
    }
    
    int result = solution(array);
    
    return 0;
}