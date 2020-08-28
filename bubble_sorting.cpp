#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int size;
	
	cout<<"Enter the size of the array \n";		/*Input of size of array*/
	cin>>size;
	
	int* a = new int[size];
	cout<<"\n Enter the array";			/* Input of array */
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	
	int temp;							/* Initializing temp variable for swapping*/
	
	
	for(int i=0;i<size;i++)				/* Loop to execute Bubble sort operation and showing changes in each iterations */
	{
		for(int j=0;j<size-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		
		cout<<"\n The result of bubble sort after - "<<i+1<<" - ";
		for(int j=0;j<size;j++)
		{
			cout<<a[j]<<" ";
		}
	}
	
	cout<<"\n \n The sorted array is : \n\n";		/* Printing sorted array  */	
	for(int j=0;j<size;j++)						
	{
		cout<<a[j]<<" ";
	}
	
	delete a;
	
	return 0;
}