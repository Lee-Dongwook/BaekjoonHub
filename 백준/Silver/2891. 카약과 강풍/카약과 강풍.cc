#include "iostream"
#include "vector"

using namespace std;

int main(){
    ios::sync_with_stdio(0);

    int answer = 0;
    int n, s, r; cin >> n >> s >> r;

    vector<int> team(n, 1);

    while (s--){ // 없는 팀 갱신
        int temp; cin >> temp;
        team[temp-1]--;
    }

    while (r--){ // 여분 팀 갱신
        int temp; cin >> temp;
        team[temp-1]++;
    }

    // 빌려주기
    for(int i = 0; i < n; i++){
        if(team[i] > 1){ // 본인이 여분이 있을 때
            if(i-1 > -1 && team[i-1] < 1){
                // 앞쪽에 빌려주는 경우
                team[i-1]++;
                team[i]--;
            } else if(i+1 < n && team[i+1] < 1){
                // 뒤쪽에 빌려주는 경우
                team[i+1]++;
                team[i]--;
            }
        }
    }

    // 정답 카운트
    for(auto now: team){
        if(now == 0) answer++;
    }

    cout << answer << endl;

    return 0;
}