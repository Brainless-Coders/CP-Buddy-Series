#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the downToZero function below.
 */
int downToZero(int n) {
    /*
     * Write your code here.
     */
    if(n==0) {
        return 0;
    }
    int ctr[1000007];
    queue<int> q;
    q.push(n);
    ctr[n]  = 1;
    while(!q.empty()) {
        int curr = q.front();
        q.pop();
        if(ctr[curr-1] == 0) {
            ctr[curr-1] = ctr[curr] + 1;
            if(curr-1 == 0) 
                break;
            q.push(curr-1);
        }
        for(int i=2;i*i<=curr;i++) {
            if(curr%i == 0) {
                int factor = max(i, curr/i);
                if(ctr[factor] == 0) {
                    ctr[factor] = ctr[curr] + 1;
                    q.push(factor);
                }
            }
        }
    }
    int tmp  = ctr[0] - 1;
    memset(ctr, 0, sizeof(ctr));
    return tmp;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = downToZero(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
