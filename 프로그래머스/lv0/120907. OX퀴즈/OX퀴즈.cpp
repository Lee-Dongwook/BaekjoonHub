#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split(string str, char delimiter)
{
    istringstream iss(str);
    string buffer;
    vector<string> result;
    
    while(getline(iss,buffer,delimiter))
    {
        result.push_back(buffer);
    }
    
    return result;
}

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
   
    
    for(int i=0;i<quiz.size();i++)
    {
        vector<string> temp = split(quiz[i],' ');
        if(temp[1] == "+")
        {
            int A = stoi(temp[0]);
            int B = stoi(temp[2]);
            int C = stoi(temp[4]);
            
            if(C == A + B)
            {
                answer.push_back("O");
            }
            else
            {
                answer.push_back("X");
            }
        }
        else if(temp[1] == "-")
        {
            int a = stoi(temp[0]);
            int b = stoi(temp[2]);
            int c = stoi(temp[4]);
            
            if(c == a-b)
            {
                answer.push_back("O");
            }
            else
            {
                answer.push_back("X");
            }
        }
        
    }
    
    return answer;
}

int main(void)
{
    vector<string> quiz;
    string sen;
    while(cin>>sen)
    {
        quiz.push_back(sen);
    }
    
    vector<string> result = solution(quiz);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<",";
    }
    
    return 0;
}