#include<stdio.h>
carryCount(int n, int num){
	int c=0,r1,r2,count=0,sum;
	while(n>0 && num>0)
	{	
		r1=n%10;
		r2=num%10;
		sum=c+r1+r2;
		if(sum>9)
		{
			c=1;
			count++;
		}
		else
		{
			c=0;
		}
		n=n/10;
		num=num/10;
	}
	return count;
}
int main()
{
	int n,num,result;
	scanf("%d %d",&n,&num);
	result=carryCount(n,num);
	printf("%d",result);
	return 0;
}
