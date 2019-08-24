
#include<iostream>
#include<time.h>
using namespace std;
//clock_t start,end;

int main()
{
	int a[10],n,k,temp;
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
	cout<<"enter k";
	cin>>k;
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"small:"<<a[k-1];
	end=clock();
	cout<<"time:"<<(double)(end-start)/(double)CLOCKS_PER_SEC;
}