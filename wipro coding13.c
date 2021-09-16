//take string as an input and another input string for target.you have to find number of times target string repaeted in string.

#include<stdio.h>
#include<string.h>
int main(){
	
	char s[100],w[10];
	int count=0,i=0,j=0,found=0;
	scanf("%[^\n]s",s);
	scanf("\n%[^\n]s",w);
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
			found++;
		}
	}
	printf("%d",found);
	
}
