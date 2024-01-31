#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> vec(4);
vector<string> result;

string word[4] = { "aya", "ye", "woo", "ma"};
bool isvisited[4] = {false, };

void init() {
    for(int i = 0; i < vec.size(); i++) {
        vec[i] = "";
    }
}

void permutation(int idx, int depth) {
    if(idx == depth) {
        string tmp;
        
        for(int i = 0; i < vec.size(); i++) {
            if(vec[i] != ""){
                tmp.append(vec[i]);
            }
        }
        
        result.push_back(tmp);
        return;
    }
    
    for(int i = 0; i < 4; i++) {
        if(!isvisited[i]){
            isvisited[i] = true;
            vec[idx] = word[i];
            permutation(idx + 1, depth);
            isvisited[i] = false;
        }
    }
}


int solution(vector<string> babbling) {
    int answer = 0;
    
    init();
    permutation(0,4);
    init();
    permutation(0,3);
    init();
    permutation(0,2);
    init();
    permutation(0,1);
    
    int cnt = 0;
    for(int i = 0; i < babbling.size(); i++) {
        if(find(result.begin(), result.end(), babbling[i]) != result.end()) {
            answer++;
        }
    }
        
    
    return answer;
}