#include <iostream>
using namespace std;

int a = 0;
int b = 0;
int DP[41];

void init()
{
	for(int i = 0; i<41;i++)
	{
		DP[i] = 0;
	}
}

int fib(int n)
{
	if(n == 1 || n == 2)
	{
		a += 1;
		return 1;
	}
	else
	  return fib(n-1) + fib(n-2);
}

int dp_fib(int n)
{
	DP[1] = 1;
	DP[2] = 1;
	
	for(int i=3;i<=n;i++)
	{
		DP[i] = DP[i-1] + DP[i-2];
		b += 1;
	}
	return DP[n];
}

int main() {
	
	init();
	int n;
	cin>>n;
	fib(n);
	dp_fib(n);
	
	cout<<a<<" "<<b;
		
	return 0;
}