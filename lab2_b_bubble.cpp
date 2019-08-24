
#include<iostream>
#include<time.h>
using namespace std;


int main()
{
	int a[10],n,k,temp;
	clock_t start;
	clock_t end;
	start=clock();
	cout<<"enter n:";
	cin>>n;
	cout<<"enter elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter k:";
	cin>>k;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	
	cout<<"kth largest number:"<<a[k-1]<<endl;
	end=clock();
	cout<<"time to execute:"<<(double)(end-start)/(double)CLOCKS_PER_SEC;
	return 0;
}