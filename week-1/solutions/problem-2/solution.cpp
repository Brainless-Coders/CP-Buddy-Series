#include<iostream>
using namespace std;

int main() {
	int n; // Take the number of elements in array
	cin>>n;
	
	int arr[n]; // Declare the array of size n
	
	for(int i=0;i<n;i++){
		cin>>arr[i]; // Input the array
	}
	
	// Traverse the array in reverse direction and print it
	for(int i=n-1;i>=0;i--) {
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
