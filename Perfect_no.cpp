/*Program is to just check whether the given no. by user is Perfect no. or not 

	Any no. Whose sum of its positive sivisor excluding the no. itself is equal to the no.
	Than the no. is called perfect no.

	For Example :-


		6 is a perfect no. because

		divisors of 6 are 1 , 2 , 3 and 6 itself 

		(Here 6 should be excluded so we will take only 1 , 2 , 3 to perform the operations)
		
		If we will add the divisors of 6

		1 + 2 + 3 = 6

		So , if we will do above calculation tha we will get again the no. 6, 
		So these type of no. is called Perfect no.

*/

#include<iostream>

using namespace std;

int main()
{
	int n;

	cin>>n;
	int sum = 0;

	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}

	if(sum==n)
	{
		cout<<"it is a perfect no. \n";
	}
	else
	{
		cout<<"it is not a perfect no. \n";
	}
	return 0;
}