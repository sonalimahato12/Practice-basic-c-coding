//two matrices are identicAL OR NOT
#include <stdio.h>

int main()
{
    int a[100][100],b[100][100],i,j,flag=0,c,r;
    scanf("%d %d\n",&c,&r);
    
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d ",&b[i][j]);
        }
    }
    
     for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
            {
                if(a[i][j]!=b[i][j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==1)
        {
            printf("no");
        }
        else
        {
            printf("yes");
        }
    return 0;
}
