//series:0 0 1 1 2 4 7 13 24
//explanation: 1st 3 no should be 0 0 1 then 4rth nu will be sum of 1st 3 number and this will go on........

#include<stdio.h>
int main()
{
	int n,a=0,b=0,c=1,i,temp,e1,e2;
	scanf("%d",&n);
	if(n==1)
	{
		printf("0");
	}
	else if(n==2)
	{
		printf("0");
	}
	else if(n==3)
	{
		printf("1");
	}
	else
	{
		for(i=4;i<=n;i++)
		{
			temp=a+b+c;
			e1=b;
			e2=c;
			c=temp;
			a=e1;
			b=e2;
			
		}
		printf("%d",temp);
	}
}
