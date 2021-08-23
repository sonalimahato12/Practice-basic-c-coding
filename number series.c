
#include<conio.h>
#include <stdio.h>
int main()
{
    int a[100],n,i,j,s=0,l=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d\t",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        l=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                s+=a[j];
            }
            else
            {
                l+=a[j];
            }
        }
        a[i]=s*l;
       
    }
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    
    return 0;
}
