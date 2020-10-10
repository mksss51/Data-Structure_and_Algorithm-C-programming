/*
Problem Description
This C Program determines the given matrix is a sparse matrix.

Problem Solution
Sparse matrix is a matrix with the majority of its elements equal to zero. This program accepts matrix and checks whether the given matrix is a sparse matrix.

i.e, no. of zero in matrix > no. of non zero element in the matrix
*/

#include<iostream>
#include<conio.h>


using namespace std;

int main()
{
    int row,col,count=0,n;
    cout<<"Enter the row and coloumn of the matrix"<<endl;
    cin>>row>>col;
    int a[row][col];
    
    n=row*col;

    cout<<"Enter the matrix : \n";
    for(int i=0;i<row;i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>a[i][j];

            if (a[i][j]==0)
            {
                ++count;
            }
            
        }
        
    }

    if (count > (n-count))
    {
        cout<<"\n It is a sparse matrix \n";
    }
    else
    {
        cout<<"\n It is not a sparse matrix \n";
    }

    return 0;
}