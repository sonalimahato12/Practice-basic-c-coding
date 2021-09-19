//Problem: You are required to count the number of words in a sentence.

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i=0,count;
    printf("Enter the string : ");
    scanf("%[^\n]s",a);
    if(a[0]==' ')
    {
        count = 0;
    }
    else
    {
        count = 1;
    }
    while(a[i]!='\0')
    {
        if(a[i]==' ' && a[i+1]!=' ' && a[i+1]!='\0')
        {
            count = count + 1;
        }
        i++;
    }
    printf("%d",count);
}

