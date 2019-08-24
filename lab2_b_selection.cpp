
#include<iostream>
#include<time.h>
using namespace std;


int main()
{
	int a[10],n,k,temp,m;
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
	for(int i=0;i<k;i++)
	{
		m=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>a[m])
				m=j;
		}
		if(m!=i)
		{
			temp=a[m];
			a[m]=a[i];
			a[i]=temp;
		}
	}
	cout<<"kth largest number:"<<a[k-1]<<endl;
	end=clock();
	cout<<"time to execute:"<<(double)(end-start)/(double)CLOCKS_PER_SEC;
	return 0;
}