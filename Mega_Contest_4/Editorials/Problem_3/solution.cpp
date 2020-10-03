#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll i,j;
    ll h,m;
    char c;
    cin>>h>>c>>m;
    if(h==0)
    {
        cout<<"01:10"<<endl;
    }
    else if(h==1)
    {
        if(m<10)
            cout<<"01:10"<<endl;
        else
            cout<<"02:20"<<endl;
    }
    else if(h==2)
    {
        if(m<20)
            cout<<"02:20"<<endl;
        else
            cout<<"03:30"<<endl;
    }
    else if(h==3)
    {
        if(m<30)
            cout<<"03:30"<<endl;
        else
            cout<<"04:40"<<endl;
    }
    else if(h==4)
    {
        if(m<40)
            cout<<"04:40"<<endl;
        else
            cout<<"05:50"<<endl;
    }
    else if(h==5)
    {
        if(m<50)
            cout<<"05:50"<<endl;
        else
            cout<<"10:01"<<endl;
    }
    else if(h>5&&h<10)
    {
        cout<<"10:01"<<endl;
    }
    else if(h==10)
    {
        if(m<01)
            cout<<"10:01"<<endl;
        else
            cout<<"11:11"<<endl;
    }
    else if(h==11)
    {
        if(m<11)
            cout<<"11:11"<<endl;
        else
            cout<<"12:21"<<endl;
    }
    else if(h==12)
    {
        if(m<21)
            cout<<"12:21"<<endl;
        else
            cout<<"13:31"<<endl;
    }
    else if(h==13)
    {
        if(m<31)
            cout<<"13:31"<<endl;
        else
            cout<<"14:41"<<endl;
    }
    else if(h==14)
    {
        if(m<41)
            cout<<"14:41"<<endl;
        else
            cout<<"15:51"<<endl;
    }
    else if(h==15)
    {
        if(m<51)
            cout<<"15:51"<<endl;
        else
            cout<<"20:02"<<endl;
    }
    else if(h>15&&h<20)
    {
        cout<<"20:02"<<endl;
    }
    else if(h==20)
    {
        if(m<2)
            cout<<"20:02"<<endl;
        else
            cout<<"21:12"<<endl;
    }
    else if(h==21)
    {
        if(m<12)
            cout<<"21:12"<<endl;
        else
            cout<<"22:22"<<endl;
    }
    else if(h==22)
    {
        if(m<22)
            cout<<"22:22"<<endl;
        else
            cout<<"23:32"<<endl;
    }
    else if(h==23)
    {
        if(m<32)
            cout<<"23:32"<<endl;
        else
            cout<<"00:00"<<endl;
    }
}

int main()
{
    std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    solve();
}

