#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int flag, orig;

void func(int n) {
        if(n<=0) {
            printf("%d ", n);
            return;
        }
        printf("%d ", n);
        func(n-5);
        printf("%d ", n);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        func(n);
        cout <<endl;
    }
    return 0;
}
