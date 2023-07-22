#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<int,int> first, second;

int solution(vector<int> topping) {
    int answer = 0;
    
    for(int i=0;i<topping.size();i++)
    {
        first[topping[i]]++;
    }
    
    int first_cnt = first.size();
    
    for(int i=0;i<topping.size();i++)
    {
        first[topping[i]]--; second[topping[i]]++;
        if(first[topping[i]] == 0)first_cnt--;
        if(first_cnt == second.size())answer++;
    }
    
    return answer;
}