#include <iostream>
#include <string>
#include <map>
using namespace std;

map<char,int> m;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N;
	cin>>N;
	
	int sum = 0;
	
	while(N--)
	{
		string str;
		cin>>str;
		
		bool a = true;
		
		m.insert({str[0],1});
		for(int i=1;i<str.size();i++)
		{
			if(str[i] == str[i-1])
			{
				continue;
			}
			else {
				auto iter = m.find(str[i]);
				if(iter != m.end())
				{
					a = false;
					break;
				}
				else{
					m.insert({str[i],1});
				}
			}
		}
		
		if(a == true){
			sum += 1;
		}
		else if(a == false){
			sum += 0;
		}
		
		m.erase(m.begin(), m.end());
	}
	
	cout<<sum;
	
	return 0;
}