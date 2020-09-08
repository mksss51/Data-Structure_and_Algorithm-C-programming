
/*Program is to just check whether the given no. by user is Amstrong or not 

	Amstrong no. is a no. that is equal to the sum of cubes of digits of the given no.

	For Example :-


		153 = (1*1*1) + (5*5*5) + (3*3*3)

			=	 1	  +	  125   +    27

			=   153

		So , if we will do above calculation tha we will get again the no. 153, 
		So these type of no. is called Amstrong no.

*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n;

	cin>>n;

	int sum=0,r;
	int temp=n;

	while(n>0)
	{
		r=n%10;
		sum+=pow(r,3);

		n=n/10;

	}

	if(sum==temp)
	{
		cout<<"Amstrong no.";
	}

	else
	{
		cout<<"Not Amstrong no.";		
	}

	return 0;
}