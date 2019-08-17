#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	clock_t start;
	clock_t end;
	start=clock();
	
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
 cout<<ans<<endl;
		end=clock();
		cout<<"time to execute:"<<(end-start)/CLOCKS_PER_SEC;
	
}
