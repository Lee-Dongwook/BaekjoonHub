#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string>split(string input, char delimiter)
{
	vector<string> temp;
	
	stringstream ss;
	string stringBuffer;
	ss.str(input);
	
	while(getline(ss,stringBuffer,delimiter)){
		temp.push_back(stringBuffer);
	}
	
	return temp;
}

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	string str;
	getline(cin,str);
	
	vector<string>result = split(str,' ');
	if(str[0] != ' ')
	{
		cout<<result.size();
	}
	else if(str[0] == ' ')
	{
		cout<<result.size() - 1;
	}
	
	return 0;
}