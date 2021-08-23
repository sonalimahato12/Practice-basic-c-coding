

#include <stdio.h>

int main()
{
    int a[100],n,i,j,flag=0,sum=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            sum+=a[i];
        }
    }
    printf("%d",sum);
    return 0;
}
