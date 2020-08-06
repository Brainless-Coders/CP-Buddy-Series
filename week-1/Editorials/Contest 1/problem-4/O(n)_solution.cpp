/*
	Editorial for Sparse Arrays

We can use the concept of hashmaps(unordered_map in C++) to solve this 
problem in O(max(n,q)).

Unordered_map is a container that stores elements formed by combination 
of key value and a mapped value. The key value is used to uniquely identify 
the element and mapped value is the content associated with the key.

The average cost of search, insert and delete from unordered_map is O(1).

For example,
u["ab"] = 2;
This means that the key is "ab" and the value associated with it is 2.

Now, we will store the frequency of all the strings in the "strings" array
with the help of unordered_map. Then for every query, we will check the
string's frequency in the map and print it.

*/

#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n; // Size of strings
	cin>>n;
	unordered_map<string, int> u; // Initialize the unordered_map
	for(int i=0; i<n; i++) 
	{
		string s;
		cin>>s;
		u[s]++  // Similar to u[s]=u[s]+1;
				// Frequency of a string is incremented each time it is repeated.
	}
	
	int q; // Size of query
	cin>>q;
	int arr[q]; // Initialize array of frequency of occurence of query in strings
	
	for(int i=0; i<q; i++) 
	{
		string s;
		cin>>s; // Take query string 
		arr[i] = u[s];  // Frquency of the string s is u[s].
	}
	
	// Print the array of occurence
	for(int i=0;i<q;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	return 0;
}

/*
Problem:
There is a collection of input strings and a collection of query strings. 
For each query string, determine how many times it occurs in the list of 
input strings.

Input Format:
The first line contains and integer n, the size of strings.
Each of the next n lines contains a string string[i].
The next line contains q, the size of queries.
Each of the next q lines contains a string q[i].

Constraints:
1 <= n <= 1000
1 <= q <= 1000
1 <= |strings[i]|, |queries[i]| <=20

Sample Input:		Sample Output:
3					2
abc					1
abc					0
abc
3
ab
abc
bc
*/
