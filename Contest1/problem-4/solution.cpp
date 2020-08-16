#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string k = "";
    for(int i = 0; i < s.length(); i++){
        string a = "";
        a = a + s[i] + s[i+1] + s[i+2];
        if(a == "WUB"){
            // cout << "in" << endl;
            i = i + 2;
        }else{
            for(int j = i; j < s.length(); j++){
                string x = "";
                x = x + s[j] + s[j+1] + s[j+2];
                if(x == "WUB"){
                    i = i + 2;
                    break;
                }else{
                    k = k + s[j];
                    i = i + 1;
                }
            }
            k = k + " ";
        }
    }
    cout << k;
}
