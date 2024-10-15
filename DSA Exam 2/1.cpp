#include<iostream>
using namespace std;

void decimalToBinary(int dec)
{
	if(dec>1)
	{
		decimalToBinary(dec/2);
	}
	cout << dec%2 ;
}

int main()
{
	int n;
	cout<< "Enter the n :" << endl;
	cin>> n;
	
		decimalToBinary(n);
	
	return 0;
}
