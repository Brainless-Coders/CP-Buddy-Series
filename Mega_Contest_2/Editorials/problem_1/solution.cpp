// This code was taken from GeeksforGeeks
// Link for the detailed editorial : https://www.geeksforgeeks.org/find-ways-integer-can-expressed-sum-n-th-power-unique-natural-numbers/

// C++ program to find number of ways to express 
// a number as sum of n-th powers of numbers. 
#include<bits/stdc++.h> 
using namespace std; 

int res = 0; 
int checkRecursive(int num, int x, int k, int n) 
{ 
	if (x == 0) 
		res++; 
	
	int r = (int)floor(pow(num, 1.0 / n)); 

	for (int i = k + 1; i <= r; i++) 
	{ 
		int a = x - (int)pow(i, n); 
		if (a >= 0) 
			checkRecursive(num, x - 
						(int)pow(i, n), i, n); 
	} 
	return res; 
} 

// Wrapper over checkRecursive() 
int check(int x, int n) 
{ 
	return checkRecursive(x, x, 0, n); 
} 

// Driver Code 
int main() 
{ 
	cout << (check(10, 2)); 
	return 0; 
} 

// This code is contributed by mits 

