//reverse the array using pointer  function 
#include<stdio.h>
int* reverseArray(int* array,int n){
	
	int i,temp;
	for(i=0;i<=n/2;i++)
	{
		temp=array[i];
		array[i]=array[n-1];
		array[n-1]=temp;
		n--;
	}
	return array;
}
int main()
{
	int n=10,i,array[100];
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	int* result=reverseArray(array, n);
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
}
