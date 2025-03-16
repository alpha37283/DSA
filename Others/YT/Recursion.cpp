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
int main()
{
	int res = 0;
	res = sum(4);
	cout << res;
}
