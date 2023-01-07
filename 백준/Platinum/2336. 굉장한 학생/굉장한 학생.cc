#include <iostream>
#include <algorithm>
using namespace std;
 
#define MAX_N 500000
 
class Info {
public :
     int x, y, z;
     Info() {}
     Info(int x, int y, int z) {
          this->x = x;
          this->y = y;
          this->z = z;
     }
     bool operator < (const Info & b) const {
          return this->x < b.x;
     }
};
 
Info arr[MAX_N];
int tree[MAX_N * 4];
 
void init_tree(int now, int start, int end) {
     if (start > end) return;
     if (start == end) {
          tree[now] = 1e9;
          return;
     }
     int mid = (start + end) / 2;
     tree[now] = 1e9;
     init_tree(now * 2, start, mid);
     init_tree(now * 2 + 1, mid + 1, end);
}
 
int update_tree(int now, int target, int start, int end, int value) {
     if (target > end || target < start) return tree[now];
     if (start == end) {
          return tree[now] = value;
     }
     int mid = (start + end) / 2;
     tree[now] = min(
          update_tree(now * 2, target, start, mid, value),
          update_tree(now * 2 + 1, target, mid + 1, end, value)
     );
     return tree[now];
}
 
int getMin(int now, int left, int right, int start, int end) {
     if (left > end || right < start) return 1e9;
     if (left <= start && end <= right) return tree[now];
     int mid = (start + end) / 2;
     return min(
          getMin(now * 2 , left, right, start, mid),
          getMin(now * 2 + 1, left, right, mid + 1, end)
     );
}
 
int main() {
     ios::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);
     int N; cin >> N;
     for (int i = 0; i < N; i++) {
          int t; cin >> t; t--; arr[t].x = i;
     }
     for (int i = 0; i < N; i++) {
          int t; cin >> t; t--; arr[t].y = i;
     }
     for (int i = 0; i < N; i++) {
          int t; cin >> t; t--; arr[t].z = i;
     }
     sort(arr, arr + N);
     init_tree(1,0,N-1);
     int ans = 0;
     for (int i = 0; i < N; i++) {
          int y = arr[i].y;
          int z = arr[i].z;
          if (getMin(1, 0, y, 0, N - 1) > z) ans++;
          update_tree(1, y, 0, N - 1, z);
     }
     cout << ans << "\n";
 
}