#include <bits/stdc++.h>
using namespace std;


int main() { 
    int t; // Input the test cases
    cin>>t;
    
    while(t--) {
        int n,k; // input n and k (ex 5 and 2)
        cin>>n>>k;
        vector<int> v; // Initialize the vector of integers
        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            v.push_back(x); // Input the vector elements (ex 6 2 1 1 6)
        }
        
        sort(v.begin(), v.end()); //  Sort the vector ( 1 1 2 6 6)
        
        int count = 1; // Intilize the count as 1
        
        for(int i=0;i<n;i++) { // Traverse the vector
        
            if(v[i] == v[i+1]) count++; // If number are equal increase the count 
            else {
                if(count<k) {  // If occurence of a number is less than k then it is the required output in our case
                    cout<<v[i]<<endl; // Print that number 
                    break; // Break from the loop
                } else {
                    count = 1; // Else if the occurence is same as k then re-initialize count as 1 and we will continue traversing
                }
            }
        }
    }
    return 0;
}
