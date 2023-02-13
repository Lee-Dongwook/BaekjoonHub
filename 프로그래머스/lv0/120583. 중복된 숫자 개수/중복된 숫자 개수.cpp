#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    
    int cnt = 0;
    
    for(int i=0;i<array.size();i++)
    {
        if(array[i] == n)
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
    
    int n;
    cin>>n;
    
    int result = solution(array,n);
    cout<<result;
    
    return 0;
}