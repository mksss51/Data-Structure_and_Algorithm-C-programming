#include<iostream>
#include<conio.h>
#include<cstdio>

void BubbleSort(int arr[], int n, int s)
{
    if(n==1)
    {
        return;
    }
    int temp;

    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    printf("\n Array after iteration %d  :- ",(s+1)-n);
    for (int i = 0; i < s; i++)
    {
        printf("%d ",arr[i]);
    }
    

    BubbleSort(arr,n-1,s);    
}

int main()
{
    int n;
    printf("\nEnter the size of unsorted array : \n");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the Unsorted array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int size = n;

    printf("\nSorting array with bubble sort method : \n");

    BubbleSort(a,n,size);

    return 0;    
}