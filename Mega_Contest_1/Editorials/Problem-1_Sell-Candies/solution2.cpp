#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin  >> n;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin >> arr[i];
        }
        sort(arr, arr+n, greater<int>());
        int sum = 0;
        int yr = 0;
        int temp = 0;
        for(int i=0;i<n;i++) {
            temp = arr[i]-yr;
            if(temp<0) {
                temp = 0;
            }
            sum = sum + temp;
            yr++;
        }
        cout << sum << endl;
    } 
    return 0;
}
