/**
 *    Editorial for the last problem in week 1 contest - Left Rotation
 * 
 * Problem:
 * 
 * A left rotation operation on an array of size n shifts each of the array's elements 1 unit to the left. For example, if 2 left rotations are performed on array [1,2,3,4,5], then the array would become [3,4,5,1,2]. 
 * Given an array of n integers and a number, d, perform d left rotations on the array. Then print the updated array as a single line of space-separated integers.
 * 
 * Input Format:
 * 
 * The first line contains two space-separated integers denoting the respective values of n (the number of integers) and d (the number of left rotations you must perform).
 * The second line contains n space-separated integers describing the respective elements of the array's initial state.
 * 
 * Constraints:
 * 1<=n<=10^5
 * 1<=d<=n
 * 1<=ai<=10^6
 * 
 * Output Format:
 * 
 * Print a single line of n space-separated integers denoting the final state of the array after performing d left rotations.
 * 
*/
// Importing required library and defining scope
#include<iostream>
using namespace std;

int main()
{   int n;
    int r;
    cin>>n>>r;
    int arr[n];
 
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    
    while(r--){
        int temp = arr[1];
        int one = arr[0];
        for(int i=0;i<n-1;i++)
    {
       arr[i] = arr[i+1];
    }
        
        arr[0] = temp;
        arr[n-1] = one;
    }
    
   
 for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    
    
    return 0;
}


/**
 *   Sample Input & Output
 * -------------------------
 * 5 2
 * 1 2 3 4 5
 * 3 4 5 1 2
*/
