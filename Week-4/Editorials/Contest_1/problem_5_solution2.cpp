#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

void helper(stack<int> &s1, stack<int> &s2) {
    while(!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin >>q;
    stack<int> s1;
    stack<int> s2;
    
    while(q--) {
        int x;
        cin >>x;
        switch(x) {
            case 1: 
                cin >> x;
                s1.push(x);
                break;
            case 2:
                if(s2.empty())
                    helper(s1, s2);
                s2.pop();
                break;
            case 3:
                if(s2.empty()) {
                    helper(s1, s2);
                }
                cout << s2.top() << endl;
                break;
            default:
                break;
        }
    }
    return 0; 
}
