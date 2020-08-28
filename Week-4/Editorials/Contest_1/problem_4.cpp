#include <bits/stdc++.h>

using namespace std;

vector<int>dp(1000001,1000001);
void precompute()
{
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<1000001;i++)
    {
        dp[i]=min(dp[i],dp[i-1]+1);
        for(int j=1;j*i<1000001&&j<=i;j+=1)
        {
            dp[i*j]=min(dp[i*j],dp[i]+1);
        }
    }
}

int main()
{
    precompute();
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin>>n;
        cout<<dp[n]<<"\n";
    }
    return 0;
}
