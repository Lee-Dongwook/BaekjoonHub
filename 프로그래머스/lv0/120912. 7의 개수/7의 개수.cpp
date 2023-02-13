#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    vector<string> res;
    
    for(int i=0;i<array.size();i++)
    {
        string k = to_string(array[i]);
        res.push_back(k);
    }
    
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            if(res[i][j] == '7')
            {
                answer++;
            }
        }
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
    cout<<result;
    
    return 0;
}