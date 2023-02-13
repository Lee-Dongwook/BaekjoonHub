#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    
    vector<int> result;
    
    int min = 1000000;
    
    for(int i=0;i<array.size();i++)
    {
        if(abs(array[i] - n) < min)
        {
            min = abs(array[i]-n);
        }
    }
    
    for(int i=0;i<array.size();i++)
    {
        if(abs(array[i] - n) == min)
        {
            result.push_back(array[i]);
        }
    }
    
    sort(result.begin(), result.end());
    
    answer = result[0];
    
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
    
    int n;
    cin>>n;
    
    int result = solution(array,n);
    cout<<result;
    return 0;
}