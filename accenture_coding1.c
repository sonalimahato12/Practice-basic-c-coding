//The function accepts two positive integers ‘r’ and ‘unit’ and a positive integer array ‘arr’ of size ‘n’ as its argument ‘r’ represents the number of rats present in an area, ‘unit’ is the amount of food each rat consumes and each ith element of array ‘arr’ represents the amount of food present in ‘i+1’ house number, where 0 <= i

//Note:

//Return -1 if the array is null
//Return 0 if the total amount of food from all houses is not sufficient for all the rats.
//Computed values lie within the integer range.
#include<stdio.h>
int find(int a[],int n,int r,int u )
{
    int total_food=r * u;
    int i=0,sum=0;
    
    if(n==0)
    {
        return -1;
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum>=total_food){
            break;
        }
    }
    if(total_food>sum)
        return 0;
    else
        return i+1;
}
int main()
{
    int a[100],r,u,count,i,n;
    scanf("%d %d %d\n",&n,&r,&u);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    count=find(a,n,r,u);
    printf("\n%d",count);

    return 0;
}
