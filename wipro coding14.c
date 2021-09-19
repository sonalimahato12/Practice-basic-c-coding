//Problem: in this first line you are required to take the value of m and n as the number of rows and columns of matrix, then you are required to take the input elements of array.
//As an output you are required to print the sum of each row then the row having the maximum sum.
#include <stdio.h>
int main()
{
    int row, colm, i, j, max = 0,sum=0,r=0;
    int mat[100][100];
    printf("enter the number of rows : ");
    scanf("%d",&row);
    printf("enter the number of columms : ");
    scanf("%d",&colm);
    for(i=0; i<row; i++)
    {
        for(j=0; j<colm; j++)
        {
            scanf("%d",&mat[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<row; i++)
    {
        sum= 0;
        for(j=0; j<colm; j++)
        {
            sum+=mat[i][j];
        }
        printf("\n");
        printf("Row %d : %d\n",i+1,sum);
        if(max<sum)
        {
        	max=sum;
        	r=i+1;
		}
    }
    printf("\nRow %d is having the maximum sum : %d",r,max);
    return 0;
}
