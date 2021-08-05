//take input array then  reverse the ath index to kth index digit.
//EX: i/p:1 2 3 4 5 6  a=2   k=5
//o/p:1 5 4 3 2 6

#include <stdio.h>
int main()
{
    int arr[1000],i,j,n,a,k,temp;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    scanf("\n%d %d\n",&a,&k);
    for(i=a-1;i<k-1;i++)
    {
        temp=arr[i];
        arr[i]=arr[k-1];
        arr[k-1]=temp;
        k--;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
