#include <iostream>
#include <set>
#include <vector>
using namespace std;

set<int> s;
vector<int> vec;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N;
	cin>>N;
	
	while(N--)
	{
		int num;
		cin>>num;
		s.insert(num);
	}
	
	int M;
	cin>>M;
	
	while(M--)
	{
		int num;
		cin>>num;
		
		auto iter = s.find(num);
		if(iter != s.end())
		{
			vec.push_back(1);
		}
		else{
			vec.push_back(0);
		}
	}
	
	for(int i=0;i<vec.size(); i++)
	{
		cout<<vec[i]<<" ";
	}
	
	return 0;
}