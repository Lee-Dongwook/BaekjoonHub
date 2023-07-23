#include <iostream>
#include <string>
using namespace std;

bool isMatch(string pattern, string word) {
    int p = 0; 
    int w = 0; 
    int star_idx = -1; 
    int w_match_idx = -1; 

    while (w < word.size()) {
        if (p < pattern.size() && (pattern[p] == word[w])) {
            p++;
            w++;
        } else if (p < pattern.size() && pattern[p] == '*') {
            star_idx = p;
            w_match_idx = w;
            p++;
        } else if (star_idx != -1) {
            p = star_idx + 1;
            w_match_idx++;
            w = w_match_idx;
        } else {
            return false;
        }
    }

   
    while (p < pattern.size() && pattern[p] == '*') {
        p++;
    }

  
    return (p == pattern.size() && w == word.size());
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    string pattern;
    cin >> pattern;

    while (N--) {
        string word;
        cin >> word;

        if (isMatch(pattern, word)) {
            cout << "DA" << endl;
        } else {
            cout << "NE" << endl;
        }
    }

    return 0;
}
