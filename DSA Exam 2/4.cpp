//WAP to print only Boundary Stars(*) of NxN Pattern.

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<< "Enter the value of n :";
	cin >> n;
	
	int i,j;
	for(i=1; i<=n; i++)
	{
		for (j=1; j<=n; j++)
		{
			if(i==1 || j==1 || i==n || j==n)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		
			
		}
		cout << endl;
	}
}
// * * * * *
// * - - - *
// * - - - *
// * - - - *
// * * * * *

