// DAY:2 Find nth largest in an array from prepinsta code prime 

//we can use bubble sort becz in bubble sort in every pass we can find largest ..so can just easily
//so nth pass so in this way we can find ther nth largest eleemnt

#include<stdio.h>
int main()
{
	int size,n;
	scanf("%d %d",&size,&n);
	int a[size],i;
	for(i=0;i<size;i++)
	{
		scanf("%d ",&a[i]);
	}
	
	int j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
		}
	}
	printf("%d",a[size-n]);
}

