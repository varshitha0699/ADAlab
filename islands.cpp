#include<iostream>
using namespace std;
bool issafe(int g[5][5],int row,int col,int visited[5][5])
{
	return (row>=0) && (row<5) &&(col>=0) &&(col<5) && (g[row][col] && !visited[row][col]);
}
void DFS(int g[5][5], int row, int col, int visited[5][5]) 
{ 
   
    static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
    static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 }; 
  
    
    visited[row][col] = 1; 
  
    
    for (int k = 0; k < 8; ++k) 
        if (issafe(g, row + rowNbr[k], col + colNbr[k], visited)) 
            DFS(g, row + rowNbr[k], col + colNbr[k], visited); 
} 
int island(int g[5][5])
{
	int visited[5][5],count=0;
	for(int i=0;i<5;i++)
	 for (int j=0;j<5;j++)
	
		visited[i][j]=0;
	
	for(int i=0;i<5;i++)
	{
	 for(int j=0;j<5;j++)
	 {
	     if(g[i][j] && !visited[i][j])
	    {
		   DFS(g,i,j,visited);
		   count++;
	    }
	 }
	}
	 return count;
}

int main()
{
	 int g[5][5] = { { 1, 1, 0, 0, 0 }, { 0, 1, 0, 0, 1 }, { 1, 0, 0, 1, 1 }, { 0, 0, 0, 0, 0 }, 
				 { 1, 0, 1, 1, 1 } };
     cout << "Number of islands is: ";
	//cout<<"number of island:";
     cout<<islnd(g);
	
	return 0;
}

