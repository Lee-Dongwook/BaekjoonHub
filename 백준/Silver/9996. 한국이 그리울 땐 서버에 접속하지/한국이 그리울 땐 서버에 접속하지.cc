#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

vector<string> split(string input, char delimiter) {
    vector<string> result;
    stringstream ss(input);
    string temp;
    
    while(getline(ss,temp,delimiter)){
        result.push_back(temp);
    }
    
    return result;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    
    string checker;
    cin >> checker;
    
    string frontCheck = split(checker,'*')[0];
    string backCheck = split(checker,'*')[1];
    
    reverse(backCheck.begin(), backCheck.end());
    
    
    while(N--){
        string data;
        cin >> data;
        
        if(frontCheck.size() + backCheck.size() > data.size())
        {
            cout << "NE"<< "\n";
        } else {
        
        bool isTrue = true;
        
        // 전반부 체크
        for(int i = 0; i < frontCheck.size(); i++) {
            if(data[i] != frontCheck[i]) {
                isTrue = false;
                break;
            }
        }
        
        if(isTrue == true){
            reverse(data.begin(), data.end());
        
            // 후반부 체크
            for(int i = 0; i < backCheck.size(); i++) {
                if(data[i] != backCheck[i]) {
                    isTrue = false;
                    break;
                }
            }  
        }
        
        if(isTrue == false) {
            cout << "NE" << "\n";
        } else if (isTrue == true) {
            cout << "DA" << "\n";
        }
        }
    }
    
    
    return 0;
}
