#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> vec;

int solution(int n) {
    int answer = 0;
    
    for(int i=1;i<=n;i++)
    {
        if(n % i == 0)
        {
            vec.push_back(i);
        }
        else continue;
    }
    
    for(int i=0;i<vec.size();i++)
    {
        answer += vec[i];
    }
    
    return answer;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    
    vec.resize(n);
    
    int result = solution(n);
    
    cout<<result;
    return 0;
    
}

