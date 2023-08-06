#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int n = board.size();

    stack<int> st;
    vector<int> topIdx(n, n);

    
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            if (board[i][j] != 0) {
                topIdx[j] = i;
                break;
            }
        }
    }

    for (int i = 0; i < moves.size(); i++) {
        int grab = moves[i] - 1; 

        
        if (topIdx[grab] == n)
            continue;

        int doll = board[topIdx[grab]][grab];
        topIdx[grab]++; 

       
        if (!st.empty() && st.top() == doll) {
            st.pop();
            answer += 1; 
        } else {
            st.push(doll);
        }
    }

    return answer * 2;
}
