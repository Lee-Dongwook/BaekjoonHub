#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    
    int x = 0; // x좌표
    int y = 0; // y좌표
    
    for(int i=0;i<keyinput.size();i++)
    {
       if(keyinput[i] == "left")
       {
            if(x-1 < -board[0]/2)continue;
           
            x -= 1;
            y = y;
       }
       else if (keyinput[i] == "right")
       {
           if(x+1 > board[0]/2)continue;
           x += 1;
           y = y;
       }
       else if (keyinput[i] == "up")
       {
           if(y+1 > board[1]/2)continue;
           x = x;
           y += 1;
       }
       else if (keyinput[i] == "down")
       {
           if(y-1 < -board[1] /2) continue;
           x = x;
           y -= 1;
       }
    }
    
    answer.push_back(x);
    answer.push_back(y);
    
    return answer;
}

int main(void)
{
    vector<string>keyinput;
    string key;
    while(cin>>key)
    {
        keyinput.push_back(key);
    }
    
    vector<int> board;
    int a,b;
    board.push_back(a);
    board.push_back(b);
    
    vector<int>result = solution(keyinput, board);
    
    cout<<result[0]<<","<<result[1];
    
    return 0;
}