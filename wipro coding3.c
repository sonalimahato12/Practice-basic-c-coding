//identify the count of the repeating digit in the number
//ex:12134456
//o/p:2  (because digit 1 and 4 repeated )

#include<stdio.h>
int main()
{
    long int n;
    int i,j,c=0,r;
    int arr[10]={0};
    scanf("%ld",&n);
    while(n>0)
    {
        r=n%10;
        arr[r]++;
        n=n/10;
    }
    for(i=0;i<=9;i++)
    {
        if(arr[i]>1)
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("%d",c);
    }
    else
    {
        printf("-1");
    }
    return 0;
}
