#include<iostream>
#include<time.h>
using namespace std;
//clock_t start,end;

int main()
{
	int a[10],n,k,min,temp;
	clock_t start;
	clock_t end;
	start=clock();
	cout<<"enter n";
	cin>>n;
	cout<<"enter elements:";
	for(int i=0;i<n;i++)  
	{
		cin>>a[i];
	}
	cout<<"enter k value"<<endl;
	cin>>k;
	for(int i=0;i<k;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		if(min!=i)
		{
			temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	}
	cout<<"smallest number:"<<a[k-1]<<endl;
	end=clock();
	cout<<"time to execute:"<<(double)(end-start)/(double)CLOCKS_PER_SEC;
	return 0;
}