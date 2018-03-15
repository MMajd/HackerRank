#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
	int n, len = 1, carry, mul, dgt;

	scanf(" %d", &n); 
	
	int arr[200] = {0}; // capacity of big int number / number of digits that number could have 
	arr[0] = 1;  // as we using this alog in factorial mul we put the first digit as 1 to be able to multiply
	
	for(int i=2; i<=n; i++) { 
		carry = 0; 
		// carry at the begin is a zero 
		// we could remove this line, but we need to put carry= 0 at the initialization 
		// at the end of the while lp we clear the carry so it filled with zero before new loop begins 

		for(int j=0; j<len; j++) { 
			mul = i * arr[j] + carry; // multiply digit no.j with i number then add the carray of the previous operation  
			dgt = mul % 10; // take the first digit of the multiplication output  
			arr[j] = dgt;  // store it instead of the current value of dgt j
			carry = mul / 10; // carry is the left digits in the multiplication output 
		}
		// if there's a carry in the carry var. enter the while lp 
		while(carry > 0) { 
			// at each lp:  we increase the length of the current output by one and add the carry digit by digit to it. 
			len ++; 
			dgt = carry % 10; // take the most right digit and add it to the current output 
			arr[len -1] = dgt; // len -1 as arrays starts form zero, instead we could increase the length after we add the digit
			carry /= 10; // take what's left in the carry but the digit we stored in the arr, and start the loop if the carry value > 0
		}
	}
	//prints the digits from the highest to the lawest. 
	for(int i = len -1; i >= 0; i--) { 
		cout << arr[i]; 
	}
	return 0;  
}