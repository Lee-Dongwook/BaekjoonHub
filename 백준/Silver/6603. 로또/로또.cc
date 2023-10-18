#include <iostream>
#include <vector>
#define MAX 6
using namespace std;

int n;
vector<int> numList;

void combination(int start, vector<int> v)
{
   if(v.size() == MAX)
   {
     for(int i = 0; i < v.size(); i++)
     {
       cout << numList[v[i]] << " ";
     }
     cout << "\n";
     return;
   }
   
   for(int i = start; i < numList.size(); i++)
   {
     v.push_back(i);
     combination(i + 1, v);
     v.pop_back();
   }
}

int main(void)
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  
  while(cin >> n && n)
  {
     numList.clear();
      
      for(int i = 0; i < n; i++)
      {
        int number;
        cin >> number;
        
        numList.push_back(number);
      }
      
      vector<int> v;
      combination(0, v);
      v.clear();
      cout<<"\n";
    }
}
