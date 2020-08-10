#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string input;
    cin >> input;
    
    vector<char> v1;
    v1.push_back('#');
    
    for(int i=0; i<input.size(); i++) {
        char x = v1.back();
        if(input[i] == x){
            v1.pop_back();
        }
        else {
            v1.push_back(input[i]);
        }
    }
    
    if(v1.size() == 1) 
        cout << "Empty String";
    else {
        for(int i=1;i<v1.size();i++) {
            cout << v1[i];
        }
    }
    cout << endl;
    return 0;
}
