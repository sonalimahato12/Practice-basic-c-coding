//find the length of the lengest word in the given sentence 
//i/p:I love My Country 
//0/p:7                     (explain:country=7)
#include <stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i=0,j,count=0;
    gets(s);
    int l=strlen(s);
    int max=0;
    while(s[i]!='\0')
    {
        if(s[i]!=' ' && s[i]!='\0')
        {
            count++;
             if(count > max)
            {
             max = count;
            }
        }
        else
        {
           if(count>max)
           {
                max=count;
                count=0;
           }
           count=0;
        }
        i++;
    }
    printf("%d",max);
    return 0;
}
