#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int find(int a[],int n,int num,int d)
{
    int i=0,sum=0;
    
    for(i=0;i<n;i++)
    {
        if(abs(a[i]-num)<=d)
        {
            sum++;
        }
        
    }
    if(sum>0)
        return sum;
    return -1;
}
int main()
{
    int a[100],n,num,count,i,d;
    scanf("%d %d %d\n",&n,&num,&d);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    count=find(a,n,num,d);
    printf("\n%d",count);
    return 0;
}
