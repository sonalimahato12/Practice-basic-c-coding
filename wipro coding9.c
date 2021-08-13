
//Take a array then first set prime number then non prime numbers
//i/p:1 2 3 4 5
//o/p:2 3 5 1 4
#include <stdio.h>
int main()
{
    int a[1000],i,j,k=0,n,flag=0;
    scanf("%d\n",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    int s[1000]={0};
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            s[k]=a[i];
            k++;
        }
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            s[k]=a[i];
            k++;
        }
    }
    for(i=0;i<n;i++)
    {
       printf("%d ",s[i]); 
    }
    return 0;
}
