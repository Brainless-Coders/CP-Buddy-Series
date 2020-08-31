#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        stack<char> a;
        string s;
        cin >> s;
        int c = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '<'){
                a.push(s[i]);
            }
            else{
                if(!a.empty() && a.top() == '<'){
                    a.pop();
                    c = c + 2;
                }else{
                    break;
                }
            }
        }
        s = s.substr(0,c);
        stack<char> b;
        int d = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '<'){
                b.push(s[i]);
            }
            else{
                if(!b.empty() && b.top() == '<'){
                    b.pop();
                    d = d + 2;
                }else{
                    break;
                }
            }
        }
        if(c == d)
            cout << c << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}

// Credits : Vanamala Srikanth

