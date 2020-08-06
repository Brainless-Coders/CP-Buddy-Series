#include<iostream>
using namespace std;

int main() {
	int n; // Take the size of array
	cin>>n;
	int sum = 0; // Initialize the sum as 0
	
	for(int i=0;i<n;i++) {
		int x; // Take the input of array items one by one and add it to the sum
		cin>>x;
		sum += x;
	}
	
	cout<<sum<<endl; // Print the sum
	return 0;
}
