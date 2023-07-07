#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<string> vec;
set<string> s;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	string word;
	cin>>word;
	
	for(int i=0;i<word.size();i++)
	{
		string temp ="";
		for(int j = i; j<word.size();j++)
		{
			temp += word[j];
			
			auto iter = s.find(temp);
			if(iter != s.end())
			{
				continue;
			}
			else{
			   s.insert(temp);	
			}
		}
	}
   
    for(auto iter = s.begin(); iter != s.end(); iter++)
    {
    	vec.push_back(*iter);
    }
    
    cout<<vec.size();

	
	return 0;
}