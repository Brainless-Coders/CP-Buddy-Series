#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int helper(int x, int n, int number);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--) {
        int x, n;
        cin >> x;
        cin >> n;
        cout << helper(x, n, 1) << endl;
    }
    return 0;
}

int helper(int x, int n, int number) {
    int curr = x - pow(number, n);
    if(curr < 0)
        return 0;
    else if(curr==0)
        return 1;
    else {
        return helper(curr, n, number+1) + helper(x, n, number+1);
    }
}
