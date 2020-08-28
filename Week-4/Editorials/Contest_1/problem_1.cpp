#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    int t;
    cin>>t;
    stack<int>s;
    stack<int>smax;
    s.push(0);
    smax.push(0);
    while(t--)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            int x;
            cin>>x;
            s.push(x);
            if(smax.top()<=x)
                smax.push(x);
        }
        else if(type==2)
        {
            if(smax.top()==s.top())
                smax.pop();
            s.pop();
        }
        else
            cout<<smax.top()<<endl;
    }
    return 0;
}
