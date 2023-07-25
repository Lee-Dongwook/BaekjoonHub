#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    
    //1단계
    string a_id = "";
    for(int i=0;i<new_id.size();i++)
    {
        char temp = new_id[i];
        
        if(temp >= 'A' && temp <= 'Z')
        {
            a_id += (new_id[i] + 32);
        }
        else{
            a_id += new_id[i];
        }
    }
    
    //2단계
    string b_id = "";
    for(int i=0;i<a_id.size();i++)
    {
        char temp = a_id[i];
        if(isalpha(temp) == 0)
        {
            if((temp >= '0' && temp <= '9') || temp =='-' || temp == '_' || temp == '.')
            {
                b_id += temp;
            }
            else{
                continue;
            }
        }
        else{
            b_id += temp;
        }
    }
    
    //3단계
    string c_id = "";
    int toggle = 0;
    
    for(int i=0;i<b_id.size();i++)
    {
        char temp = b_id[i];
        
        if(temp == '.' && toggle == 0)
        {
            c_id += temp;
            toggle = 1;
        }
        else if(temp == '.' && toggle == 1)
        {
            continue;
        }
        else if(temp != '.' && toggle == 1)
        {
            c_id += temp;
            toggle = 0;
        }
        else if(temp != '.' && toggle == 0)
        {
            c_id += temp;
        }
    }
    
    //4단계
    string d_id = "";
    for(int i=0;i<c_id.size();i++)
    {
        char temp = c_id[i];
        if((temp == '.' &&  i == 0) || (temp == '.' && i == c_id.size() -1 ))
        {
            continue;
        }
        else{
            d_id += temp;
        }
    }
    
    //5단계
    string e_id = "";
    if(d_id.size() == 0)
    {
        e_id += 'a';
    }
    else{
        e_id = d_id;
    }
    
    //6단계 - 1
    string f_id = "";
    if(e_id.size() >= 16)
    {
        for(int i=0;i<15;i++)
        {
            f_id += e_id[i];
        }
    }
    else{
        f_id = e_id;
    }
    
    //6단계 - 2
    string g_id = "";
    if(f_id[f_id.size() - 1] == '.')
    {
        for(int i=0;i<f_id.size()-1;i++)
        {
            g_id += f_id[i];
        }
    }
    else{
        g_id = f_id;
    }
    
    //7단계
    if(g_id.size() < 3)
    {
        int less = 3 - g_id.size();
        char temp = g_id[g_id.size()-1];
        
        for(int i=1; i<= less;i++)
        {
            g_id += temp;
        }
    }
    
    answer = g_id;
    return answer;
}