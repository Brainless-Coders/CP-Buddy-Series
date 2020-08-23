#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n],b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int i = 0, j = n-1;
        while((k > 0) && (a[i] < b[j])){
            a[i] = b[j];
            i = i + 1;
            j = j - 1;
            k = k - 1;
        }
        long long int s = 0;
        for(int i = 0; i < n; i++){
            s = s + a[i];
        }
        cout << s << endl;
    }
}
