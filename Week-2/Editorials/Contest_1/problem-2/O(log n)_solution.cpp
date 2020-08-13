// Since the input array is already sorted, we can use binary search to find the index of V

#include<iostream>
using namespace std;

int main()
{
	int k;
	cin>>k;
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int l=0,r=n-1;      //Left and right limits
	while(l<=r)
	{
		int mid = l+(r-l)/2;    //Formula for mid (To avoid overflow)
		if(v[mid]==k)
		{
			cout<<mid<<endl;
			return;
		}
		if(v[mid]<k)
			l=mid+1;
		else
			r=mid-1;
	}
}

