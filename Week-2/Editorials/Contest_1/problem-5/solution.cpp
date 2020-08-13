/* Lily's Homework */

#include <bits/stdc++.h>

using namespace std;

int swappy(vector<int> a, vector<int> s){
    map<int,int> m;
    for(int i = 0; i < a.size(); i++){
        m[a[i]] = i;
    }
    int c = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != s[i]){
            c = c + 1;
            int t = a[i];
            a[i] = s[i];
            int x = m[s[i]];
            a[m[s[i]]] = t;
            m[t] = x;
        }
    }
    return c;
}

int lilysHomework(vector<int> a) {
    vector<int> v;
    v = a;
    sort(a.begin(),a.end());
    int ac = swappy(v,a);
    reverse(a.begin(),a.end());
    int bc = swappy(v,a);
    int ans = min(ac,bc);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[i] = a;
    }

    int result = lilysHomework(arr);

    cout << result << "\n";
    return 0;
}
