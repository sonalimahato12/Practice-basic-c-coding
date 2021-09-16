//Count the number of word in a sentence
//i/p:   sona maja maja    0/p:3

#include<stdio.h>
#include<string.h>
int main(){
	
	char s[100];
	int count=0,i=0;
	scanf("%[^\n]s",s);
	
	if(s[0]!=' ')
	{
		count++;
	}
	while(s[i]!='\0')
	{ 
		if(s[i]==' ' && s[i+1]!=' ' && s[i+1]!='\0')
		{
			count++;
		}
		i++;
	}
	printf("%d",count);
	
}
