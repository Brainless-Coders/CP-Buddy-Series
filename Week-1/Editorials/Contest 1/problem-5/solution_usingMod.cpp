#include <bits/stdc++.h>

using namespace std;

int main()
{
 
    int n,d;
    cin>>n>>d;      // Taking input of size of array and number of left rotations
    int a[n+1],b[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){     // We will find out the new array having rotated values in very effective way using maths
        /*
            So for left rotation you can see that for
            1 2 3 4 5
            After 2 rotations means d=2
            Array will be 
            3 4 5 1 2
            Now if you check index difference with d 
            You will get the new index
            But the problem is there can be negative number 
            So to solve it you can add n in it and take mod with n 
            Why we take mod with n?
            Reason: For indices which are in end like 4 in above example, if we add n in it then the array will be out of bound
            so to keep the array in bound we take mod with the size of array i.e. n
            Now you have the solution
        */
        b[(n+i-d)%n]=a[i];
        
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}