#include <iostream>
#define INF 987654321
using namespace std;

long long A, B;
int cnt = INF;

void DFS(long long num, int steps) {
    if (num > B) {
        return;
    }

    if (num == B) {
        cnt = min(cnt, steps); 
        return;
    }

    DFS(num * 2, steps + 1);
    DFS(num * 10 + 1, steps + 1);
}

int main() {
    cin >> A >> B;

    DFS(A, 0);

    if (cnt == INF) {
        cout << -1 << endl;
    } else {
        cout << cnt + 1 << endl;
    }

    return 0;
}
