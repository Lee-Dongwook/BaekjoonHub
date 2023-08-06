#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(pair<int,double>a, pair<int,double>b)
{
    if(a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    //1부터 N단계
    int progress[N+1];
    int clear[N+1];
    double fail_rate[N+1];
    
    for(int i=0;i<=N;i++)
    {
        progress[i] = 0;
        clear[i] = 0;
    }
    
    fail_rate[0] = 0.0;
    
    for(int i=0;i<stages.size();i++)
    {
        int temp = stages[i];
        if(temp == N+1)
        {
            for(int j=1;j<=N;j++)
            {
                clear[j] += 1;
            }
        }
        else{
            progress[temp] += 1;
            for(int j=1; j<=temp-1; j++)
            {
                clear[j] += 1;
            }
        }
    }
    
    for(int i=1;i<=N;i++)
    {
        if(progress[i] == 0)
        {
            fail_rate[i] = 0.0;
        }
        else{
            fail_rate[i] = 1.0 + (double)(progress[i] - clear[i]) / (progress[i] + clear[i]);
        }
    }
    
    vector<pair<int,double>> vec;
    
    for(int i=1;i<=N;i++)
    {
        cout<<progress[i]<<" "<<clear[i]<<" ";
        vec.push_back(make_pair(i,fail_rate[i]));
    }
    cout<<endl;
    
    sort(vec.begin(),vec.end(),cmp);
    
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<"\n";
        answer.push_back(vec[i].first);
    }
    
    return answer;
}