#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
 
#define endl "\n"
using namespace std;
 
int N;
int Alphabet[26];
vector<string> V;
 
bool Cmp(int A, int B)
{
    if (A > B) return true;
    return false;
}
 
void Input()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string Inp; cin >> Inp;
        V.push_back(Inp);
    }
}
 
void Solution()
{
    for (int i = 0; i < N; i++)
    {
        string S = V[i];
        int Len = S.length();
        int Pow = 1;
 
        for (int j = Len - 1; j >= 0; j--)
        {
            int Tmp = S[j] - 'A';
            Alphabet[Tmp] = Alphabet[Tmp] + Pow;
            Pow = Pow * 10;
        }
    }
    sort(Alphabet, Alphabet + 26, Cmp);
    
    int Answer = 0;
    int Num = 9;
    for (int i = 0; i < 26; i++)
    {
        if (Alphabet[i] == 0) break;
        Answer = Answer + (Alphabet[i] * Num);
        Num--;
    }
 
    cout << Answer << endl;
}
 
void Solve()
{
    Input();
    Solution();
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    
    Solve();
 
    return 0;
}
