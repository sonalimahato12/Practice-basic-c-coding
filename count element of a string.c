//DAY:4  count element of a string

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int space=0,alpha=0,special=0,digit=0,i=0;
	
	scanf("%[^\n]s",str);
	
	while(str[i]!='\0')
	{
		if((str[i]>=65 && str[i]>=90) || (str[i]>=97 && str[i]<=122))
		{
			alpha++;
		}
		else if(str[i]==32)
		{
			space++;
		}
		else if(str[i]>=48 &&str[i]<=57)
		{
			digit++;
		}
		else
		{
			special++;
		}
	i++;
	}
	printf("%d\n",digit);
	printf("%d\n",alpha);
	printf("%d\n",special);
	printf("%d\n",space);
	return 0;
}
