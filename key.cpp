#include<iostream>
using namespace std;
int main()
{
	int k,a[10],t,r[10],n,mid,first,last;
	
	cin>>t;
	for(int i=0;i<t;i++)
	{
		
		cin>>n>>k;
		
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		first=0;
		last=n-1;
		mid=(first+last)/2;
		while(first<=last)
		{
			
			if(a[mid]==k)
			{
				r[i]=1;
				break;
			}
			if(a[mid]>k)
			{
				last=mid-1;
			}
			if(a[mid]<k)
			{
				first=mid+1;
			}
			
		}
		if(first>last)
			r[i]=-1;
		
	}
	for(int i=0;i<t;i++)
	{
		cout<<r[i]<<" ";
	}
	return 0;
}