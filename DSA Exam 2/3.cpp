//WAP to find the Binomial coefficient of (n.k)

#include<iostream>
using namespace std;
int   bioCo(int n, int k)
{
	int temp=0;
	 temp= n/k*(n-k);
	cout<< temp;
	
	return temp;
}
int main()
{
	int n,k;
	cout << "N :";
	cin >> n;
	
	cout << "K :";
	cin >> k;
	bioCO(n,k);
	cout << bioCo;
}
