//i/p:12 3 1 4 5
//o/p:0 9 0 0 0        (explain:for 12 =(sum of small elements in right side) * (sum of large elements in right side)
										//(3+1+4+5) * 0= 0
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
