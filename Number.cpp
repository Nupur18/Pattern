#include <iostream>
using namespace std ;
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	for (int i = n; i >= 1; i--)
	{
		for (int l=1 ; l<=n-i ; l++ )
		{
			cout<<" ";
			
		}
		int p=1;
		for(int j = 1; j<=i ;j++)
		{
			cout<<p;
			p+=1;
		}
		p=1;	int q=n-i;
		for(int k = i-1 ; k>=1 ; k--)
		{
			cout<<k; 
		}
		cout<<endl;
	}
	return 0 ;
}