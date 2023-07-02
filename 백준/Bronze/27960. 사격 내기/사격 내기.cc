#include <iostream>
#include <cmath>
using namespace std;

int SA[10]={0,};
int SB[10]={0,};
int SC[10]={0,};


int main(void)
{
    int A,B;
    cin>>A>>B;
    
    while(A>0)
    {
        if(A>=512)
        {
            SA[9] = 1;
            A -= 512;
        }
        else if(A>= 256 && A < 512)
        {
            SA[8] = 1;
            A -= 256;
            
        }
        else if(A>= 128 && A < 256)
        {
            SA[7] = 1;
            A -= 128;
            
        }
         else if(A>=64 && A < 128)
        {
            SA[6] = 1;
            A -= 64;
            
        }
         else if(A>=32 && A < 64)
        {
            SA[5] = 1;
            A -= 32;
            
        }
         else if(A>=16 && A < 32)
        {
            SA[4] = 1;
            A -= 16;
            
        }
         else if(A>=8 && A < 16)
        {
            SA[3] = 1;
            A -= 8;
            
        }
         else if(A>=4 && A < 8)
        {
            SA[2] = 1;
            A -= 4;
            
        }
         else if(A>=2 && A < 4)
        {
            SA[1] = 1;
            A -= 2;
            
        }
        else if(A>=1 && A < 2){
            SA[0] = 1;
            A-= 1;
        }
    }
    
    while(B>0)
    {
        if(B>=512)
        {
            SB[9] = 1;
            B -= 512;
        }
        else if(B>= 256 && B < 512)
        {
            SB[8] = 1;
            B -= 256;
            
        }
        else if(B>= 128 && B < 256)
        {
            SB[7] = 1;
            B -= 128;
            
        }
         else if(B>=64 && B < 128)
        {
            SB[6] = 1;
            B -= 64;
            
        }
         else if(B>=32 && B < 64)
        {
            SB[5] = 1;
            B -= 32;
            
        }
         else if(B>=16 && B < 32)
        {
            SB[4] = 1;
            B -= 16;
            
        }
         else if(B>=8 && B < 16)
        {
            SB[3] = 1;
            B -= 8;
            
        }
         else if(B>=4 && B < 8)
        {
            SB[2] = 1;
            B -= 4;
            
        }
         else if(B>=2 && B < 4)
        {
            SB[1] = 1;
            B -= 2;
            
        }
        else if(B>=1 && B < 2){
            SB[0] = 1;
            B -= 1;
        }
    }
    
    for(int i = 0; i < 10 ; i++)
    {
        if(SA[i] == 0 && SB[i] == 0)
        {
            SC[i] = 0;
        }
        else if(SA[i] == 1 && SB[i] == 1)
        {
            SC[i] = 0;
        }
        else{
            SC[i] = 1;
        }
    }
    
    int res = 0;
    
    for(int i = 0 ; i< 10 ; i++)
    {
        res += pow(2,i) * SC[i];
    }
    
    cout<<res;
    
    
    return 0;
}