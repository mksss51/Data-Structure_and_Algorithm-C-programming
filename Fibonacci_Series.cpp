/*The Fibonacci sequence is a sequence where the next term is the sum of the previous two terms.
The first two terms of the Fibonacci sequence are 0 followed by 1.

The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21*/

#include<iostream>

using namespace std;

int main()
{
	//This is printing Fibonacci series upto n terms

	int n;
	cout<<"Enter the number of terms: ";
	cin>>n;

	int t1=0,t2=1;

	int nextterm;
	printf("Fibonacci Series upto certain no.:-\n");

	for(int i=1;i<=n;i++)  
	{
		cout<<t1<<" ";
		nextterm = t1 + t2;
		t1=t2;
		t2 = nextterm;
	}


	//This is printing Fibonacci series upto certain no.
	n=0;
	cout<<"\nEnter the number till you want to print Fibonacci Series: ";
	cin>>n;

	t1=0,t2=1;
	nextterm = 0;
	printf("Fibonacci Series upto  no.:-\n");
	cout<<t1<<" "<<t2;
	nextterm = t1 + t2;

	while(nextterm<n)
	{
		
		cout<<" "<<nextterm;
		t1=t2;
		t2=nextterm;
		nextterm = t1 + t2;
	}
}