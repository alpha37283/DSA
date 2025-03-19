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

void srcToDest(int src, int dest)
{
	 if(src == dest)
	 {
	 	return ; 
	 }
	 
	 cout << src << " " << dest << endl ;
	 src += 1;
	 srcToDest(src, dest);
}

int fabonacciSer(int n) // return nth number of fabonacci series
{
	 if( n == 1)
	 {
	 	return 1;
	 }
	 
	 if( n == 0)
	 {
	 	return 0;
	 }
	 
	 return fabonacciSer(n - 1) + fabonacciSer(n - 2);
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

	cout << f << "th term is : " << fabonacciSer(f);
	
	
}
