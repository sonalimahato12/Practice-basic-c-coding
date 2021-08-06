//Find the total distance between adjacent item of a  list
//input:2 4 5 7 8
//output:5     (explain=2-4=2, 4-5=1, 5-7=2, 7-9=1)

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int arr[1000],n,i,j,sum=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        sum+=abs(arr[i]-arr[i+1]);
    }
    printf("\n%d",sum);

    return 0;
}
