//Find the total no of perfect sqaure in the array
//input:22 4 25 7 81
//output:3    

#include <stdio.h>
#include<math.h>
int main()
{
    int arr[1000],n,i,j,s,count=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=sqrt(arr[i]);
        if((s*s)==arr[i])
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
