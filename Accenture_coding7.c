//char*MoveHyphen(char str[],int n);
//The function accepts a string “str” of length ‘n’, that contains alphabets and hyphens (-). Implement the function to move all hyphens(.) in the string 
//to the front of the given string.


#include<stdio.h>
char * hypenRemove(char s[],int n){
	int i=n-1,j,count=0;
	for(j=i;j>=0;j--)
	{
		if(s[j]!='-')
		{
			char temp=s[i];
			s[i]=s[j];
			s[j]=temp;
			i--;
		}
			
	}
	return s;
}
int main()
{
	int n;
	char s[100];
	scanf("%d",&n);
	scanf("%s",s);
	printf("%s",hypenRemove(s,n));
}
