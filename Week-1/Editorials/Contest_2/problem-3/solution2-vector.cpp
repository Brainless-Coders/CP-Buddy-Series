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
        cin >> n;
        vector<int> v1;
        int input, k;
        for(int i=0;i<n;i++) {
            cin >> input;
            v1.push_back(input);
        }
        cin >> k;
        sort(v1.begin(), v1.end());
        cout << v1[k-1] << endl;
    }
    return 0;
}
