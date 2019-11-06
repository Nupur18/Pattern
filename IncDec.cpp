#include<iostream>
using namespace std ;
int main ()
{
	int n ;
	cout<<"Enter a number : ";
	cin>>n;
	for(int i =1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<j<<" ";
			if (j==i)
			{
				for(int k= ((2*n-1)-2*i); k>0; k--)
				{
					cout<<"  ";
				}
				
				for(int l = i; l>0; l--)
				{
					if(l!=n)
					{
						cout<<l<<" ";
					}
					else 
						break;	
				}
				
				for(int l = i-1; l>0; l--)
				{
					if(i==n)
					{
						cout<<l<<" ";
					}
					else 
						break;
				}
				cout<<endl;
			}	
		}
		
	}
	return 0;
}