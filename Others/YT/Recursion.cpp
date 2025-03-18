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
	 if( n == 0)
	 {
	 	return 0;
	 }
	 
	 int prev = printCounting(n - 1);
	 int current = 1 + prev;
	 cout << current << " ";
	 return current;
}
int pow2(int n)
{
	if(n == 0)
	{
		return 1;
	}
	
	int prevVal = pow2(n - 1);
	int currentVal = 2 * prevVal;
	return currentVal;
}
int main()
{
//	int res = 0;
//	res = sum(4);
//	cout << res;
	
	int f;
	cin >> f;
//	cout<< "Factorial of " << f << " is " << fact(f) ;
//	cout<< "pow of " << f << "^2 is " << pow2(f) ;

printCounting(f);
	
	
}
