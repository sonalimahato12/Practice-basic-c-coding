//substring in a string present or not

#include<stdio.h>
#include<string.h>
int find(char s[],char w[])
{
	int count=0,i=0,j=0,found=0;
	for(i=0;i<strlen(s);i++)
	{
		count=1;
		for(j=0;j<strlen(w);j++)
		{
			if(s[i+j]!=w[j])
			{
				count=0;
				break;	
			}
		}
		if(count==1)
		{
			return 1;

		}
		
	}
	return 0;
}
int main(){
	
	char s[100],w[10];
	scanf("%[^\n]s",s);
	scanf("\n%[^\n]s",w);
	int result=find(s,w);
	printf("%d",result);
}
