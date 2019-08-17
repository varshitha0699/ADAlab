#include<iostream>
using namespace std;
int main()
{
 int x,first,last,mid,root,ans;
 cin>>x;
 first=1;
 last=x;
 
 while(first<=last)
 {  
	 mid=(last+first)/2;
	 if(mid*mid==x)
		cout<<mid<<endl;
	if(mid*mid<x)
	{
		first=mid+1;
		ans=mid;
		
	}
	else{
		last=mid-1;
	}
		 
 }
 cout<<ans;
}