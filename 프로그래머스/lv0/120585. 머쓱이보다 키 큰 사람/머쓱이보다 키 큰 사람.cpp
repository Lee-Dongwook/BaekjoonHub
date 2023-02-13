#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    
    int cnt = 0;
    
    for(int i=0;i<array.size();i++)
    {
        if(array[i] > height)
        {
            cnt++;
        }
    }
    
    answer = cnt;
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
    
    int height;
    cin>>height;
    
    int result = solution(array,height);
    cout<<result;
    return 0;
}