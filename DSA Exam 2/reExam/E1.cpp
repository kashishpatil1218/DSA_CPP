#include<iostream>
using namespace std;
int main()
{
	int dec,r,bin=0,temp=1;
	
	cout << "Enter the number :";
	cin >> dec;
	while(dec>0)
	{
		r=dec%2;
		bin+= r * temp;
		dec=dec/2;
		temp*=10;
	}
	cout << "Ans : " << bin << endl;

    return 0;
}











