#include<bits/stdc++.h>
using namespace std;
int pow(int n, int p = 2)
{
    int ans = 0;
    for(int i = 1; i<2; i++)
    {
        ans += n * n;
    }

    return ans;
}
int main()
{
	int n;
	cout << "Enter a number : " ; 
	cin >> n;
	
	cout << endl << "Ans is : " << pow(n); 
	
}
