//lcm of 3 numbers

#include<stdio.h>
int lcm(int,int,int);
int main()
{
	int a,b,c,l,k;
	printf("Enter any three positive integers" );
	scanf("%d%d%d",&a,&b,&c);
	int result=lcm(a,b,c);
	printf("%d",result);
}

int lcm(int a, int b, int c)
{
	int l,temp;
	if(a>b)
	{
		 l = a;
		while(1)
		{
			if(l % a == 0 && l % b == 0)
				break;
			l++;
		}
	}
	else{
		l = b;
		while(1)
		{
			if(l % a == 0 && l % b == 0)
				break;
			l++;
		}
		
	}
	if(l>c)
	{
		temp = l;
		while(1)
		{
			if(temp % l == 0 && temp % c== 0)
				break;
			temp++;
		}
	}
	
	else
	{
		temp = c;
		while(1)
		{
			if(temp % l == 0 && temp % c== 0)
				break;
			temp++;
		}	
	}
	
	return temp;

}


