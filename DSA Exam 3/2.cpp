//// reverse an array in cpp
//
#include<iostream>
using namespace std;

int  ChangedArray(int a[],int n)
{
	int start=0;
	int end=n-1;
	while(start < end)
	{
		int temp = a[start];
		a[start]= a[end];
		a[end]=temp;
		
		start++;
		end--;
	}
}

void theArray(const int a[],int n)
{
	for(int i=0; i<n; i++)
	{
		cout << a[i] ;
	}
	cout << endl;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
      

    ChangedArray(a, n);

    cout << "Ans : " << " ";
    theArray(a, n);

    return 0;
}

