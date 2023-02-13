#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 0;
    
    int a = box[0] / n;
    int b = box[1] / n;
    int c = box[2] / n;
    
    answer += a*b*c;
    
    return answer;
}

int main(void)
{
    vector<int> box;
    
    int num;
    while(cin>>num)
    {
        box.push_back(num);
    }
    
    int n;
    cin>>n;
    
    int result = solution(box,n);
    cout<<result;
    
    return 0;
}

