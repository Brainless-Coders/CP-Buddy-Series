#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    stack<int>s1,s2;
    while(t--)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            int val;
            cin>>val;
            s1.push(val);
        }
        else
        {
            if(s2.empty())
            {
                while(!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            if(type==2)
                s2.pop();
            else
                cout<<s2.top()<<"\n";
        }
    }
}
