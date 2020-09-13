/* It's a simple problem of counting number of prime numbers between a and b */

#include<iostream>
#include<bits/stdc++.h>
#define ll long long int 


using namespace std;

void prime_seive(int *p) {
  for(ll i=3;i<=1000000;i+=2) p[i]=1;
    
    p[2]=1;
    p[1]=p[0]=0;
    
    for(ll i=0;i<=1000000;i++)
    {
        if(p[i]==1)
        {
            for(ll j=i * i;j<=1000000;j+=i)
            {
                p[j]=0;
            }
        }
    }

    
}

int main(){
    int T;
    cin>>T;
    int p[1000005] = {0};
    prime_seive(p);
    int no_of_prime[1000000] = {0};
    for(int i=1;i<=1000000;i++){
        no_of_prime[i] = no_of_prime[i-1]+p[i];
    }
    while(T--){
        int a, b;
        cin>>a>>b;
        if(a!=0) cout<<no_of_prime[b]-no_of_prime[a-1]<<endl;
        else cout<<no_of_prime[b]<<endl;
    }
    

    return 0;
}
