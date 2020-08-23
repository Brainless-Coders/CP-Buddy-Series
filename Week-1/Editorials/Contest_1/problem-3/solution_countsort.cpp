#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;                    //t is used for test cases
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;              // Array is initialized to zero
        int a[10000]={0};      // the size of array depends on contraints of array given in the problem
        /*
         Count sort takes extra space of size equal to constraints but this algorithm works in O(n)
         Here we consider indices as numbers and increment them according to the input
        */
        for(int i=0;i<n;i++){
            int x;
            cin>>x;                     // Now, here we are getting the value from user and 
            a[x]++;                      //incrementing the value at that particular index
        }
        for(int i=0;i<10000;i++){
            if(a[i]!=k&&a[i]!=0){      //Here comes the condition and important part
            /*
              Now, according to question we know that the element should have frequency equal to k
              If we analyze this array we have saved the frequencies of indices and if a number does not exist then it will be having 0 as value
            */    
                cout<<i<<endl;       // printing the index or number which has less or more frequency than k
                break;
            }
        }
    }
    
    return 0;
}
