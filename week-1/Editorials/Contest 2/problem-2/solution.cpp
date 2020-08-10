#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t; 
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        int f = 0;
        int size = 1;
        while(size != n){
            string prefix = "";
            string suffix = "";
            prefix = s.substr(0,size);
            suffix = s.substr(n-size,size);
            // cout << "prefix : " << prefix << " suffix : " << suffix << endl;
            if(prefix == suffix){
                f = size;
            }
            size = size + 1;
        }
        cout << f << endl;
    }
}
