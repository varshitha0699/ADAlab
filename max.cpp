#include<iostream>
using namespace std;
int main()
{
	int n,a[10],max;
	cout<<"enter the value of n:";
	cin>>n;
	cout<<"enter the n integers:";
	for(int i=0;i<n;i++)
	{
		cin>>[i];
	}
	max=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	cout<<"max number is:"<<max;
	
	return 0;
}
