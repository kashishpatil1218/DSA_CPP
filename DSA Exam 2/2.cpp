#include<iostream>

using namespace std;

int  BinaryToDecimal(int bin)
{
   int dec=0, temp=1, r;
   while(bin>0)
   {
   	  r=bin%10;
   	  dec+= r*temp;
   	  bin=bin/10;
   	  temp=temp*2;
   }
   
   return dec;
}
   
int main()
{
	int n;
	cout<< "Enter the n :";
	cin>> n;
	
    int dec = BinaryToDecimal(n);
    cout << "ans : " << dec << endl;
		
		
	
	return 0;
}

//5 
//101
//(2*2)+(2*1)+(2*0)
//4+1+0
//5



