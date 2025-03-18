#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{ 
	if(n == 0)
	{
		return 0;
	}
	
	return n + sum(n - 1);
	
	
}

int fact(int n)
{
	if(n == 0)
	{
		return 1;
	}
	
	return n * fact(n-1);
}
int printCounting(int n)
{
	 
}
int pow2(int n)
{
	
}
int main()
{
//	int res = 0;
//	res = sum(4);
//	cout << res;
	
	int f;
	cin >> f;
	cout<< "Factorial of " << f << " is " << fact(f) ;
	
}
