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
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for(int i=0;i<n;i++) 
            cin >> a[i];
        for(int i=0;i<n;i++) 
            cin >> b[i];
        sort(a, a+n);
        sort(b, b+n);
        int i = 0;
        int sum = 0;       
        if(b[n-1] <= a[0]) {
            for(i=0;i<n;i++) {
                sum += a[i];
            }
        }
        else {
            for(int i=0;i<k;i++) {
                if(b[n-i-1] > a[i]) {
                    a[i] = b[n-i-1];
                }
                else {
                    break;
                }
            }
            for(int i=0;i<n;i++) {
                sum += a[i];
            }
        }
        cout << sum << endl;
    }
    return 0;
}
