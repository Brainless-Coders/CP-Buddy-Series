#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int totalUpper = 1;
    for(int i = 0; i < s.length(); i++){
        if(!isupper(s[i])){
            totalUpper = 0;
            break;
        }
    }
    if(totalUpper){
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        cout << s;
    }else{
        if(islower(s[0])){
            int upper = 1;
            for(int i = 1; i < s.length(); i++){
                if(!isupper(s[i])){
                    upper = 0;
                    break;
                }
            }
            if(upper){
                string a = s.substr(1);
                s[0] = toupper(s[0]);
                transform(a.begin(),a.end(), a.begin(), ::tolower);
                cout << s[0];
                cout << a;
            }else{
                cout << s;
            }
        }else{
            cout << s;
        }
    }
    return 0;
}
