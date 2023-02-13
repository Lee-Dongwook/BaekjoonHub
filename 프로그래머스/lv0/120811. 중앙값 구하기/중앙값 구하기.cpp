#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    sort(array.begin(),array.end());
    
    answer = array[array.size()/2];
    
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
    cout<<result;
    
    return 0;
}