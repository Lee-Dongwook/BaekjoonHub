#include <iostream>
#include <string>
#include <map>
using namespace std;

string answer = "";
map<char, int> m;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    
    while(N--) {
        string name;
        cin >> name;
        
        char first = name[0];
        
        auto iter = m.find(first);
        if(iter != m.end()) {
            iter->second += 1; 
        } else {
            m.insert({first, 1});
        }
    }
    
    for(auto iter: m) {
        if(iter.second >=5){
            answer += iter.first;
        }
    }
    
    
    if(answer == ""){
        cout<<"PREDAJA";
    } else {
        cout<<answer;
    }
    
    return 0;
}
