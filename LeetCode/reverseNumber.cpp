#include<bits/stdc++.h>
using namespace std;
int addDigits(int num) {
        int sum = 0;

        while(num != 0)
        {
            int digit = num % 10;
            sum += digit; 
            num = num / 10;
        }
        return sum;
}   
int main()
{
	int num =  38;
	cout << "ans is " << addDigits(num);
	
	
}
