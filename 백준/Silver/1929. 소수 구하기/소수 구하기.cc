#include <iostream>
#include <cmath>
using namespace std;

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
			cout<<i<<"\n";
		}
		else{
			continue;
		}
	}
	
	return 0;
}