//count the distinct element in an array
//i/p:1 3 4 1 6 8 3 6
//o/p:5
#include<stdio.h>
int count(int a[],int l)
{
	int i,cou=0,j,flag=0;
	for(i=0;i<l;i++)
	{
	    flag=0;
		for(j=i+1;j<l;j++)
		{
			if(a[i]==a[j])
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			cou++;
		}
	}
	return cou;
}
int main()
{
	int a[1000],i,l;
	scanf("%d\n",&l);
	for(i=0;i<l;i++)
	{
		scanf("%d ",&a[i]);
		
	}
	int result=count(a,l);
	printf("%d",result);
	return 0;
}
