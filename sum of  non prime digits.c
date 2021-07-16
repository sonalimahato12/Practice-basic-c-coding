// DAY:1  sum of non prime digits

#include<stdio.h>
int main()
{
	long int no;
	int i,sum=0,rem,count=0;
	
	scanf("%ld",&no);
	
	while(no!=0)
	{
		count=0;
		rem=no%10;
		for(i=1;i<=rem;i++)
		{
			if(rem%i==0)
			{
				count++;
			}
			
		}
		if(count>2)
		{
			sum=sum+rem;
		}
		no=no/10;
	}
	printf("%d",sum);
	
}
