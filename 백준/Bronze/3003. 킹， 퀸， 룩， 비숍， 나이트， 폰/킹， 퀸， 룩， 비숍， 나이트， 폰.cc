#include <iostream>
using namespace std;

int main() {
	
	int arr[6];
	
	for(int i=0;i<6;i++)
	{
		cin>>arr[i];
	}
	
	int res[6];
	
	res[0] = 1-arr[0];
	res[1] = 1-arr[1];
	res[2] = 2-arr[2];
	res[3] = 2-arr[3];
	res[4] = 2-arr[4];
	res[5] = 8-arr[5];
	
	for(int i=0;i<6;i++)
	{
		cout<<res[i]<<" ";
	}
	
	return 0;
}