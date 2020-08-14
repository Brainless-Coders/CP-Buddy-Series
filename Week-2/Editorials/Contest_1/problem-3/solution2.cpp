#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--) {
        int m, n;
        cin >> m >> n;
        int arr[m][n];
        
        unordered_map<int, vector<int>> diagonal;
        
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                cin>>arr[i][j];
                diagonal[i-j].push_back(arr[i][j]);
            }
        }
        
        for(int i=-(n-1);i<m;i++){
            sort(diagonal[i].begin(), diagonal[i].end());
        }
        
        for(int i=m-1;i>=0;i--) {
            for(int j=n-1;j>=0;j--) {
                arr[i][j] = diagonal[i-j].back();
                diagonal[i-j].pop_back();
            }
        }
        
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
