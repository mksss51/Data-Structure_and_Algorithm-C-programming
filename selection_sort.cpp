#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main()
{
    int* a = new int[sizeof(int)];
    int pos,size,small,temp;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

    cout<<"Array after selection sort \n";
    for(int i=0;i<size-1;i++)
    {
        small = a[i]; //Initializing small as first element of unsorted half of array
        pos=i;
        for(int j=i+1;j<size;j++)
        {
            if(a[j]<small)
            {
                small=a[j];
                pos = j;
            }
        }
            temp = a[i];
            a[i]=a[pos];
            a[pos]=temp;

        cout<<endl<<"Array after first pass - "<<i+1<<" - is : ";    //showing each iteration of a selection sort
        for(int j=0;j<size;j++)
        {
            cout<<a[j];
        }
    }
    delete a;

}
