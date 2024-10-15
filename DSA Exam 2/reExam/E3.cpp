#include<iostream>
using namespace std;

int Cofficient(int n, int k)
{
	 if(k>n)
	 return 0;
	 if(k==0 || k==n)
	 return 1;
	 
	 return Cofficient(n-1, k-1)+Cofficient(n-1,k);
}

int main()
{
	int n, k;
	cout << "Enter n :";
	cin >> n;
	cout << "Enter k :";
	cin >> k;
	
	cout << "Ans : ("<< n << "," << k <<") :"<<Cofficient(n,k);
	return 0; 
	
}


