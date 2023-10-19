#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;

int main(void)
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  
  cin >> N;
  vector<int> vec(N);
  
  for(int i = 0; i < N; i++)
  {
    cin>> vec[i];
  }
  
  if(prev_permutation(vec.begin(), vec.end()))
  {
    for(int i = 0; i < N; i++)
    {
      cout<<vec[i]<<" ";
    }
  }
  else{
    cout<<-1;
  }
  
  return 0;
}