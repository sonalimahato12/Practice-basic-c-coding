//multiply 1st element of first array with last element of 2nd array then 2nd element of first array  with 2nd last  element of 2nd array.
//this process go on and at last add all of those.
//i/p:1 2 3 4 5
//    5 4 3 2 1
//o/p:55    explain=1*1+282+3*3+4*4+5*5
#include<conio.h>
#include <stdio.h>
int sumof(int a[],int b[],int n){
    int s=0,i;
     for(i=0;i<n;i++)
    {
        s+= (a[i]*b[n-i-1]);
    }
    return s;
}
int main()
{
    int a[100],b[100],n,i,j,sum;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d\t",&a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        scanf("%d\t",&b[i]);
    }
    sum=sumof(a,b,n);
    printf("%d\t",sum);
    
    return 0;
}
