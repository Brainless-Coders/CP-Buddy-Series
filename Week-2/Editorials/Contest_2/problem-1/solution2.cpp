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
    cin >>t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr;
        unordered_map<int,int> m1;
        int input;
        for(int i=0;i<n;i++) {
            cin >> input;
            arr.push_back(input);
            m1[arr[i]] = i;
        }
        
        vector<int> v1, v2;
        v1 = arr;
        v2 = arr;
        sort(v1.begin(), v1.end());
    
        int ctr = 0;
        for(int i=0;i<arr.size();i++ ){
            if(v1[i] != v2[i]) {
                int index = m1[v1[i]];
                m1[v1[i]] = i;
                m1[v2[i]] = index;
                swap(v2[i], v2[index]);
                ctr++;
            }
        }
        cout << ctr << endl;
    }
    return 0;
}
