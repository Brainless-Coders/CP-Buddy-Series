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
        int n, k;
        cin>>n>>k;
        int arr[n];
        unordered_map<int, int> m1;
        for(int i=0;i<n;i++) {
            cin >> arr[i];
            m1[arr[i]]++;
        }
        for(auto it:m1) {
            if(it.second==1)
                cout<<it.first<<endl;
        }
        
    }
    return 0;
}
