#include<iostream> 
#include<cstring> 
#include<cstdlib> 
using namespace std; 


void lcs( string X, string Y, int m, int n ) 
{ 
int L[m+1][n+1]; 


for (int i=0; i<=m; i++) 
{ 
	for (int j=0; j<=n; j++) 
	{ 
	if (i == 0 || j == 0) 
		L[i][j] = 0; 
	else if (X[i-1] == Y[j-1]) 
		L[i][j] = L[i-1][j-1] + 1; 
	else
		L[i][j] = max(L[i-1][j], L[i][j-1]); 
	} 
} 


int ind= L[m][n]; 
 
char lcs[ind+1]; 
lcs[ind] = '\0'; 
int i = m, j = n; 
while (i > 0 && j > 0) 
{ 
	
	if (X[i-1] == Y[j-1]) 
	{ 
		lcs[ind-1] = X[i-1]; 
		i--; j--; ind--;	 
	} 
	else if (L[i-1][j] > L[i][j-1]) 
		i--; 
	else
		j--; 
} 
cout << "LCS of " << X << " and " << Y << " is " << lcs; 
} 

int main() 
{ 
string X,Y;
cout<<"enter the string1:";
cin>>X;
cout<<"enter the string2:";
cin>>Y;
int p = X.length(); 
int q = Y.length(); 
lcs(X, Y, p, q); 
return 0; 
}
