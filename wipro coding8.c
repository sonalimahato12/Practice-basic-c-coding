//Find the smallest digit in the number
//i/p:983562
//o/p:2
#include<stdio.h>
int main()
{
    long int n;
    int min=10,r;
    scanf("%ld",&n);
    while(n>0)
    {
        r=n%10;
        if(r<min)
        {
            min=r;
        }
        n=n/10;
    }
    printf("%d",min);

    return 0;
}
