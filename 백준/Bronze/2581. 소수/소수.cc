#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int M,N;
	cin>>M>>N;
	
	for(int i=M;i<=N;i++)
	{
		int sum = 0;
		for(int j=2; j<=sqrt(i); j++)
		{
			if(i % j == 0)
			{
				sum += 1;
				break;
			}
		    else{
		    	continue;
		    }
			
		}
		if(sum == 0 && i != 1)
		{
			vec.push_back(i);
		}
		else{
			continue;
		}
	}
	
	int S = 0;
	if(vec.size() == 0)
	{
	  cout<<"-1";	
	}
	else{
	 for(int i=0;i<vec.size();i++)
	 {
		S += vec[i];
	 }
	
	 sort(vec.begin(), vec.end());
	
	 cout<<S<<"\n"<<vec[0];
	}
	return 0;
}