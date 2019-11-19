#include <iostream>
using namespace std ;
int nCr(int n , int r)
{
	unsigned long long int N = 1;
	for (int i=1 ; i<=n ; i++)
	{
		N = N*i;
	}
	unsigned long long int R = 1 ;
	for (int j=1 ; j<=r ; j++)
	{
		R = R*j;
	}
	unsigned long long int N_R = 1 ;
	for (int k=1 ; k<=(n-r) ; k++)
	{
		N_R = N_R*k;
	}
	int ans = N/(R * N_R);
	return ans;
}
int main ()
{
	int x;
	cout<<"Enter a number : ";
	cin >>x;
	for(int i = 0 ; i<x ; i++)
	{
		for(int j =(x-i-1) ; j>0 ; j--)
			{
				cout<<" ";
			}	
		for(int k = 0; k<=i ; k++)
		{
			int d = nCr(i,k);
			cout<<d<<" ";
		}
		cout<<endl;		
	}
	return 0;
}