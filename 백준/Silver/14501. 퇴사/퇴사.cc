#include <iostream>
#include <algorithm>
using namespace std;

int N;
int T[15] = {0, };
int P[15] = {0, };
int ans[15] = {0, };

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> T[i] >> P[i];
    }
    
    for(int i = N - 1; i >= 0; i--) {
        int end = i + T[i];
        
        if(end > N) {
            ans[i] = ans[i+1]; 
        } else {
            ans[i] = max(ans[i+1], ans[end] + P[i]);
        }
    }
    
    cout << ans[0];
    
    return 0;
}
