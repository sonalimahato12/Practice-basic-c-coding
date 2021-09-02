#include <stdio.h>
int main()
{
    int n,i,r,a[10]={0};
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        a[r]++;
        n=n/10;
    }
    for(i=0;i<=10;i++)
    {
       if(a[i]!=0) 
       {
           printf("\n%d is ocuured %d time",i,a[i]);
       }
    }
    return 0;
}

