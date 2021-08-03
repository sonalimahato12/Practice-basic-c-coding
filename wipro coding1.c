//take input as a array.in array every number's sum of digit  have to print.
//ex:43 397 38 493
//o/p:7 19 11 16

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
        while(arr[i]>0)
        {
            r=arr[i]%10;
            sum+=r;
            arr[i]=arr[i]/10;
        }
        printf("%ld ",sum);
    }
    return 0;
}
