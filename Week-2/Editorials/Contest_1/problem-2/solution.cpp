#include<iostream>
using namespace std;
int main(){
    int k;
    cin >> k;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a == k){
            cout << i;
            return 0;
        }
    }
    
}
