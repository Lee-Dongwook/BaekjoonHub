#include <iostream>
#include <queue>
#include <vector>
using namespace std;

queue<int>q;
vector<int> vec;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N,K;
	cin>>N>>K;
	
	for(int i=1;i<=N;i++)
	{
		q.push(i);
	}
	
	while(!q.empty())
	{
		for(int i=1;i<K;i++)
		{
			int t = q.front();
			q.pop();
			q.push(t);
		}
		int temp = q.front();
		vec.push_back(temp);
		q.pop();
	}
	
	cout<<"<";
	for(int i=0;i<vec.size();i++)
	{
	   if(i < vec.size()-1)
	   {
		cout<<vec[i]<<", ";
	   }
	   else{
	   cout<<vec[i];
	   }
	}
	cout<<">";
	
	
	return 0;
}