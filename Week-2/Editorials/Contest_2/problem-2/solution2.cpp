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
        int n;
        cin >>n;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin >> arr[i];
        }
        int ctr = 0;
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                if(arr[j] < arr[i]) {
                    ctr++;
                }
            }
        }
        cout << ctr << endl;
    }
    return 0;
}
