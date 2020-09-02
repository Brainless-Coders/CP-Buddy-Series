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
    while(t--){
        int n, m;
        cin >> n;
        cin >>m;
        int a[n], p[m];
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        for(int i=0;i<m;i++) {
            cin >> p[i];
        }
        sort(p, p+m);
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(a[p[j]] < a[p[j]-1]) {
                    swap(a[p[j]], a[p[j]-1]);
                }
            }
        }
        if(is_sorted(a, a+n)) {
            cout << "YES" << endl;
        }
        else 
            cout << "NO" << endl;
    }
    return 0;
}
