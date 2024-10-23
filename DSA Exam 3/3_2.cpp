//Explain linear search with practicale 
//



//Linear search is use to check aevery element in the list  in sequec until the element was not foud in the list 


#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int target)
{
	for(int i=0; i<n; i++)
	{
		if(arr[i]==target)
		{
			return i;
		}
	}
	//return -1;
}

int  main()
{
	int arr[]={10,2,20,55,100,109};
	int n=sizeof(arr)/ sizeof(arr[0]);
	int target;
	
	cout << "Enter the target :";
	cin >> target;
	int result = linearSearch(arr,n,target);
	
	cout << result;
	

}



