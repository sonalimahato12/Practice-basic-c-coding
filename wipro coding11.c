//find out the row number which has more number of ZEros.
#include <stdio.h>

int main()
{
    int a[100][100],i,j,flag=0,c,r;
    scanf("%d %d\n",&c,&r);
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d ",&a[i][j]);
        }
        printf("\n");
    }
    int count=0;
    int max=0;
    int row;
    for(i=0;i<r;i++)
    {
        count=0;
        for(j=0;j<c;j++)
        {
            if(a[i][j]==0)
            {
                count++;
            }
        }
        if(count>max)
        {
            max=count;
            row=i;
        }
    }
    printf("%d",row);
    return 0;
}
