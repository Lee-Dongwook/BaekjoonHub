#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int alpha[8] = {0};//0: A , 1: C , 2: F , 3 : J , 4 : M , 5 : N , 6 : R, 7 : T

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    
    for(int i=0;i<survey.size();i++)
    {
        string q = survey[i];
        
        if(q == "RT")
        {
            int score = choices[i];
            switch(score)
            {
                case 1:
                alpha[6] += 3;
                break;
                
                case 2:
                alpha[6] += 2;
                break;
                
                case 3:
                alpha[6] += 1;
                break;
                
                case 4:
                break;
                
                case 5:
                alpha[7] += 1;
                break;
                
                case 6:
                alpha[7] += 2;
                break;
                
                case 7:
                alpha[7] += 3;
                break;
                
                default:
                break;
            }
        }
        else if(q == "TR")
        {
            int score = choices[i];
            switch(score)
            {
                case 1:
                alpha[7] += 3;
                break;
                
                case 2:
                alpha[7] += 2;
                break;
                
                case 3:
                alpha[7] += 1;
                break;
                
                case 4:
                break;
                
                case 5:
                alpha[6] += 1;
                break;
                
                case 6:
                alpha[6] += 2;
                break;
                
                case 7:
                alpha[6] += 3;
                break;
                
                default:
                break;
            }
        }
         else if(q == "FC")
        {
           int score = choices[i];
            switch(score)
            {
                case 1:
                alpha[2] += 3;
                break;
                
                case 2:
                alpha[2] += 2;
                break;
                
                case 3:
                alpha[2] += 1;
                break;
                
                case 4:
                break;
                
                case 5:
                alpha[1] += 1;
                break;
                
                case 6:
                alpha[1] += 2;
                break;
                
                case 7:
                alpha[1] += 3;
                break;
                
                default:
                break;
            } 
        }
         else if(q == "CF")
        {
            int score = choices[i];
            switch(score)
            {
                case 1:
                alpha[1] += 3;
                break;
                
                case 2:
                alpha[1] += 2;
                break;
                
                case 3:
                alpha[1] += 1;
                break;
                
                case 4:
                break;
                
                case 5:
                alpha[2] += 1;
                break;
                
                case 6:
                alpha[2] += 2;
                break;
                
                case 7:
                alpha[2] += 3;
                break;
                
                default:
                break;
            }
        }
         else if(q == "MJ")
        {
            int score = choices[i];
            switch(score)
            {
                case 1:
                alpha[4] += 3;
                break;
                
                case 2:
                alpha[4] += 2;
                break;
                
                case 3:
                alpha[4] += 1;
                break;
                
                case 4:
                break;
                
                case 5:
                alpha[3] += 1;
                break;
                
                case 6:
                alpha[3] += 2;
                break;
                
                case 7:
                alpha[3] += 3;
                break;
                
                default:
                break;
            }
        }
         else if(q == "JM")
        {
            int score = choices[i];
            switch(score)
            {
                case 1:
                alpha[3] += 3;
                break;
                
                case 2:
                alpha[3] += 2;
                break;
                
                case 3:
                alpha[3] += 1;
                break;
                
                case 4:
                break;
                
                case 5:
                alpha[4] += 1;
                break;
                
                case 6:
                alpha[4] += 2;
                break;
                
                case 7:
                alpha[4] += 3;
                break;
                
                default:
                break;
            }
        }
         else if(q == "AN")
        {
            int score = choices[i];
            switch(score)
            {
                case 1:
                alpha[0] += 3;
                break;
                
                case 2:
                alpha[0] += 2;
                break;
                
                case 3:
                alpha[0] += 1;
                break;
                
                case 4:
                break;
                
                case 5:
                alpha[5] += 1;
                break;
                
                case 6:
                alpha[5] += 2;
                break;
                
                case 7:
                alpha[5] += 3;
                break;
                
                default:
                break;
            }
        }
         else if(q == "NA")
        {
            int score = choices[i];
            switch(score)
            {
                case 1:
                alpha[5] += 3;
                break;
                
                case 2:
                alpha[5] += 2;
                break;
                
                case 3:
                alpha[5] += 1;
                break;
                
                case 4:
                break;
                
                case 5:
                alpha[0] += 1;
                break;
                
                case 6:
                alpha[0] += 2;
                break;
                
                case 7:
                alpha[0] += 3;
                break;
                
                default:
                break;
            }
        }
    }
    
    if(alpha[6] >= alpha[7])
    {
        answer += "R";
    }
    else if(alpha[6] < alpha [7])
    {
        answer += "T";
    }
    
    if(alpha[1] >= alpha[2])
    {
        answer += "C";
    }
    else if(alpha[1] < alpha [2])
    {
        answer += "F";
    }
    
    if(alpha[3] >= alpha[4])
    {
        answer += "J";
    }
    else if(alpha[3] < alpha [4])
    {
        answer += "M";
    }
    
    if(alpha[0] >= alpha[5])
    {
        answer += "A";
    }
    else if(alpha[0] < alpha [5])
    {
        answer += "N";
    }
    
    
    
    
    return answer;
}