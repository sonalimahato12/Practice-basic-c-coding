//ith element in the list will be equal to sum of the first elemnt untill the ith element in the list
//ex:1 2 4 6 7 
//0/p:1 3 7 13 20

#include <stdio.h>

int main()
{
    long int arr[100000],i,j,sum,r,s;
    scanf("%ld\n",&s);
    for(i=0;i<s;i++)
    {
        scanf("%ld ",&arr[i]);
    }
    // int l=sizeof(arr) / sizeof(arr[0]);
    for(i=0;i<s;i++)
    {
        sum=0;
        for(j=0;j<=i;j++)
        {
           sum+=arr[j];
        }
        printf("%ld ",sum);
    }
    return 0;
}
