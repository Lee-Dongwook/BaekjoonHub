#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int temp = 0;
    for(int i = 0; i< nums.size() - 2; i++)
    {
        for(int j = i + 1; j < nums.size() - 1; j++)
        {
            for(int k = j + 1; k < nums.size(); k++ )
            {
                temp += (nums[i] + nums[j] + nums[k]);
                
                cout<<temp<<"\n";
                int res = 1;
                
                for(int m=2;m<=temp;m++)
                {
                    if(temp % m == 0)
                    {
                        res += 1;
                    }
                }
                
                if(res == 2)
                {
                    answer += 1;
                    temp = 0;
                }
                else{
                    temp = 0;
                    continue;
                }
            }
        }
    }

    return answer;
}