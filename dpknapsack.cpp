#include<stdio.h>
#include<iostream>
using namespace std; 

int max(int a, int b) 
{ 
	if(a>b)
		return a;
	else
		return b;

 } 

int knapSack(int W, int wt[], int val[], int n) 
{ 
int i, j; 
int K[n+1][W+1]; 

for (i = 0; i <= n; i++) 
{ 
	for (j = 0; j <= W; j++) 
	{ 
		if (i==0 || j==0) 
			K[i][j] = 0; 
		else if (wt[i-1] <= j) 
				K[i][j] = max(val[i-1] + K[i-1][j-wt[i-1]], K[i-1][j]); 
		else
				K[i][j] = K[i-1][j]; 
	} 
} 

return K[n][W]; 
} 

int main() 
{ 
	int val[30];
	int wt[30];
	int n;
	int W;
	cout<<"enter n:";
	cin>>n;
	cout<<"enter value array:\n";
	for(int i=0;i<n;i++)
	{
		cin>>val[i];
		
	}
	cout<<"enter weight array:\n";
	for(int i=0;i<n;i++)
	{
		cin>>wt[i];
		
	}
	
	cout<<"enter the total capacity of knapsack:";
	cin>>W; 
	printf("%d", knapSack(W, wt, val, n)); 
	return 0; 
} 
