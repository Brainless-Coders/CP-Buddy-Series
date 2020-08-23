#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; // Size of strings
	cin>>n;
	vector<string> strings; // Initialize the vector of strings;
	
	for(int i=0;i<n;i++) {
		string s;
		cin>>s;
		strings.push_back(s); // Storing values in strings
	}
	
	int q; // Size of query
	cin>>q;
	
	int arr[q]; // Initialize array of frequency of occurence of query in strings
	
	for(int i=0;i<q;i++) { 
		string s;
		cin>>s; // Take query string 
		int freq = 0; // Initialize frequency of occurence as 0
		
		for(int j=0;j<n;j++) { // Traverse through whole strings for every query
			if(strings[j] == s) freq++; // If query is present in strings then increase the frequency by 1
 		}
 		
 		arr[i] = freq; // After traversing store the freq value in array
	}
	
	// Print the array of occurence
	for(int i=0;i<q;i++){
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
