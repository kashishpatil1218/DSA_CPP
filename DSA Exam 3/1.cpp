//swap to variable witiut using third variable with bitwise operator 

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout << "Enter the a :";
	cin >> a;
	cout << "Enter the b :";
	cin >> b;
	
	a= a^b;
	b= a^b;
	a=a^b;
	
	cout << "a is : "<< a<< endl;
	cout << "b is : "<< b << endl;
}
