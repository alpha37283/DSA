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

int fabonacciSer(int n) // return nth number of fabonacci series 6
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


int distinctWaysToClimbStairs(int n)  // 7 
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
void sayDigits(int n) // 8 
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

bool isSorted(int arr[], int l) // 9
{
	if(l == 0 || l == 1)
	{
		return true;
	}
	
	if(arr[0] > arr[1])
	{
		return false;
	}
	
	return isSorted(arr + 1, l - 1);

}
int sumRec(int arr[], int s) // 10
{
	if(s == 0)
	{
		return 0;
	}
	
	int prev = sumRec(arr + 1, s - 1);
	
	return arr[0] + prev;
}

bool linearSearch(int arr[], int key, int s) // 11
{
	if(s == 0)
	{
		return false;
	}
	else if(arr[0] == key)
	{ 
		return true;
	}
	else
	{
		return linearSearch(arr + 1, key, s - 1);	
	}
}

bool binarySearch(int arr[], int s, int e, int key)
{
	 // base case
	 int mid;
	 mid = (s + e) / 2; 
	 
	 if(s > e)
	 {
	 	return false;
	 }
	 
	 if(arr[mid] == key)
	 {
	 	return true;
	 }
	 else if(arr[mid] > key) // 1 2 3 4 5 k = 4
	 {
	 	return binarySearch(arr, s, e - 1, key);
	 }
	 else 
	 {
	 	return binarySearch(arr, mid + 1, e, key);
	 }
}

void reverseString(string &str, int s, int e)
{
	if(s > e)
	{
		return ;
	}
	
	swap(str[s], str[e]);
	s++;
	e--;
	reverseString(str,s,e);
}

bool palindrom(string str, int i)
{ 
	if( i > (str.length() - i - 1))
	{
		return true;
	}
	
	if(str[i] != str[str.length() - i - 1])
	{
		return false;
	}
	
	i++;
//	cout << i << " ";
	return palindrom(str, i);
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

//	cout << f << "th term is : " << fabonacciSer(f);

// 	sayDigits(f);
//	cout << "To climb " << f << " Stairs there exist " << distinctWaysToClimbStairs(5) << " ways.";
	
	
	int arr[5] = {1,2,3,4,5};
	int l = (sizeof(arr)/sizeof(arr[0]));
//	if(isSorted(arr, l))
//	{
//		cout << "True";
//	}	
//	else
//	{
//		cout << "False";
//	}

//cout << "The sum of array is " << sumRec(arr, l);

	string str = "alpha";	
	if(palindrom(str,0))
	{
		cout << str << " is palindrom";
	}
	else
	{
		cout << str << " is not palindrom";
	}
	
	
	
//	reverseString(str, 0, str.length() - 1);
//	cout << str;
}
