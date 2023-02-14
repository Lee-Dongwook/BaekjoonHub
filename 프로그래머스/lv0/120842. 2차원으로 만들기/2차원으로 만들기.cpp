#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> temp(vector<int> num_list, int start ,int n)
{
    vector<int> result;
    
    for(int i=start; i<start+n;i++)
    {
        result.push_back(num_list[i]);
    }
    
    return result;
}

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    
   
    
    for(int i=0;i<num_list.size();i++)
    {
        vector<int> res = temp(num_list,i,n);
        
        answer.push_back(res);
    
        i += n-1;
    }
    
    
    
    return answer;
}

int main(void)
{
    vector<int> num_list;
    int num;
    while(cin>>num)
    {
        num_list.push_back(num);
    }
    
    int n;
    cin>>n;
    
    vector<vector<int>>result = solution(num_list,n);
    
    for(int i=0;i<num_list.size()/n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<result[i][j]<<",";
        }
        cout<<",";
    }
    
    return 0;
}