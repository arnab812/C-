#include<iostream>
using namespace std; 
int main( ) 
{  
    int m; 
    cout<<"Enter rows : ";
    cin>>m;
    int n;
    cout<<"Enter columns : ";
    cin>>n;
    int  s[m][n];
    int i, j;
	for(i=0;i<m;i++)
	  {
	  	for(j=0;j<n;j++)
	  	{
	  		cout<<"\ns["<<i<<"]["<<j<<"]=  ";
	  		cin>>s[i][j];
		}
	  } 
	  
	  cout<<"\nThe 2-D Array is:\n";
      for(i=0;i<m;i++)
	  {
	  	for(j=0;j<n;j++)
	  	{
	  		cout<<"\t"<<s[i][j];
		}
		cout<<endl;
	  } 
}
