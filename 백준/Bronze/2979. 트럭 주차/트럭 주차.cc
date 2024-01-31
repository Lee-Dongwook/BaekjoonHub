#include <iostream>
using namespace std;

int A, B, C;
int total = 0;
int timer[101];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> A >> B >> C;
    
    fill(timer, timer + 101, 0);
    
    for(int i = 1; i <= 3; i++) {
        int start, end;
        cin >> start >> end;
        
        for(int j = start; j <end; j++){
            timer[j] += 1;
        }
    }
    
    for(int i = 0; i < 101; i++) {
        switch(timer[i]){
            case 1:
            total += A;
            break;
            
            case 2:
            total += B * 2;
            break;
            
            case 3:
            total += C * 3;
            break;
            
            default:
            continue;
        }
    }
    
    cout << total;
    
    return 0;
}