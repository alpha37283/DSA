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

void srcToDest(int src, int dest) // 5 
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


int distinctWaysToClimbStairs(int n)
{
	 if( n < 0)
	 {
	 	return 0;
	 }
	 
	 if( n == 0)
	 {
	 	 return 1;
	 }
	 
	 int ans = distinctWaysToClimbStairs(n - 1) + distinctWaysToClimbStairs(n - 2);
	 
	 return ans;
}
string s[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void sayDigits(int n)
{
	if( n == 0 )
	{
		return ;
	}
	
	int lastDigit = n % 10;
	int shortned = n / 10;
	
	sayDigits(shortned);
	cout << s[lastDigit] << " ";
	 
}

void isSorted(int arr[], int l)
{
	if(arr[])

}
int main()
{
//	int res = 0;
//	res = sum(4);
//	cout << res;
	
//	int f;
//	cin >> f;
//	cout<< "Factorial of " << f << " is " << fact(f) ;
//	cout<< "pow of " << f << "^2 is " << pow2(f) ;

//	cout << f << "th term is : " << fabonacciSer(f);

// 	sayDigits(f);
//	cout << "To climb " << f << " Stairs there exist " << distinctWaysToClimbStairs(5) << " ways.";
	
	
	int arr[5] = {1,2,3,4,5};
	int l = (sizeof(arr)/sizeof(arr[0]));
	isSorted(arr, l);
	
	
}
