#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main()
{
    int* a = new int[sizeof(int)];
    int n,pos,size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the position and number you want to insert in the array \n";
    cin>>pos;

    for(int i=pos-1;i<=size-1;i++)
    {
        a[i] = a[i+1];        
    }

    for(int i=0;i<size-1;i++)
    {
        cout<<a[i];
    }
    delete a;

}
