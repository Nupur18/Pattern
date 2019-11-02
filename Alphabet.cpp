#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin >>n;
	if(n>=1 and n<=26)
	{
		for(int i = 1; i<=n ; i++)
		{
			for(int j = 1; j<=i ; j++)
				{
					for(char k = 'a'; k<(97+i) ;k++)
						{
							cout<<k;
						}
					cout<<endl;	
				}
		}
	}
	else 
	{
		cout<<"Pattern not possible ";
	}   
	return 0;
}