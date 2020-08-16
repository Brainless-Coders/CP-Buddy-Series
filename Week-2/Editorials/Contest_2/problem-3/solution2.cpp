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
        int n;
        cin >>n;
        vector<int> arr;
        int input;
        
        for(int i=0;i<n;i++) {
            cin >> input;
            arr.push_back(input);
        }
        
        vector<int> v1, v2;
        v1 = arr;
        unordered_map<int, int> m1;
        sort(v1.begin(), v1.end());
        for(int i=0;i<v1.size()-1;i++) {
            m1[v1[i]] = v1[i+1];
        }
        
        for(int i=0;i<arr.size();i++) {
            int temp = m1[arr[i]];
            if(temp>0) 
                cout << temp << " ";
            else
                cout << "_" << " ";
        }
        cout << endl;
    }
    return 0;
}
