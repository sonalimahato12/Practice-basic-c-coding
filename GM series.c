//sum of Gm series   2^n
//i/p:1 2 4 8 16
//0/p:31

#include<stdio.h>
void fun(int a,int r,int n)
{
	float sum=0,temp=a;
	int i;
	for(i=1;i<=n;i++)
	{
		sum=sum+temp;
		temp=temp*r;
	}
	printf("%.0f",sum);
}
int main()
{
	int a,r,n;
	scanf("%d %d %d",&a,&r,&n);
	fun(a,r,n);
	return 0;
}
