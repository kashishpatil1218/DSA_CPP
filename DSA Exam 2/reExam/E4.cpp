#include<iostream>
using namespace std;

int main()
{
	int i,j,k=1;
	for(i=1; i<=5; i++)
	{
		
		for(j=i; j<=5; j++)
		{
			cout<< " " << k++;
		}
		cout << endl;
	}
}


//1
//2 9
//3 8 10
//4 7 11 13
//5 6 12 14 15

