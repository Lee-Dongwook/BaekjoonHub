#include <iostream>
#include <string>
#include <stack>
using namespace std;

int total = 0;
int sum = 0;  // Initialize sum to 0, not 1
stack<char> st;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int T;
    cin >> T;
    
    while(T--)
    {
        string str;
        cin >> str;
        
        total = 0;  // Reset total for each test case
        sum = 0;    // Reset sum for each test case
        while (!st.empty()) st.pop();  // Clear the stack for each test case
        
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == 'O'){
                sum += 1;
                total += sum;
                st.push('O');
            } else if(str[i] == 'X'){
                sum = 0;
                if(!st.empty()){
                    st.pop();
                }
            }
        }
        cout << total << "\n";
    }
    
    return 0;
}
