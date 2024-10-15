#include<iostream>

using namespace std;

int  BinaryToDecimal(int bin)
{
   int dec=0, k=1, r;
   while(bin>0)
   {
   	  r=bin%10;
   	  dec+= r*k;
   	  bin=bin/10;
   	  k=k*2;
   }
   
   return dec;
}
   
int main()
{
	int n;
	cout<< "Enter the n :";
	cin>> n;
	
    int dec = BinaryToDecimal(n);
    cout << "Ans : " << dec << endl;
		
	return 0;
}



