#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <limits.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    stack<int> s1;
    stack<int> max;
    max.push(0);
    while(n--) {
        int x;
        cin >> x;
        if(x==1) {
            cin >> x;
            if(x>=max.top())
                max.push(x);
            s1.push(x);
        }
        else if(x==2) {
            if(s1.top() == max.top())
                max.pop();
            s1.pop();
        }
        else {
            cout << max.top() << endl;
        }
    }
    return 0;
}
