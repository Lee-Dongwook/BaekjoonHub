#include <iostream>
#include <string>
#include <vector>

using namespace std;

int alphabet[26] = {0};
int blphabet[26] = {0};
int solution(string before, string after) {
    int answer = 1;
    
    for(int i=0;i<before.size();i++)
    {
        if(before[i]>='a' && before[i] <='z')
        {
            alphabet[before[i]-'a']++;
        }
    }
    for(int i=0;i<after.size();i++)
    {
          if(after[i]>='a' && after[i] <='z')
        {
            blphabet[after[i]-'a']++;
        }
    }
    
    for(int i=0;i<26;i++)
    {
        if(alphabet[i] != blphabet[i])
        {
            answer = 0;
            break;
        }
    }
    
    return answer;
}

int main(void)
{
    string before,after;
    cin>>before>>after;
    
    int result = solution(before,after);
    cout<<result;
    
    return 0;
}