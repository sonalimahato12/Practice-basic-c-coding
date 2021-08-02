
// take input as a string of list of words seprtd with space.
//you have to find out the last word length only chracter not spaces included

#include <stdio.h>
#include<string.h>

int main()
{
    char s[100000];
    int i,j,n=0;
    gets(s);
    int l=strlen(s)-1;
    if(s[l]==' ')
   {
        while(l>=0 && s[l]==' ')
        {   
            l--;
            if(s[l+1]!=' ')
            {
                break;
            }
        }
   }
    for(i=l;i>=0;i--)
    {
        if(s[i]==' ')
        {
            break;
        }
        n++;
    }
  
    printf("%d",n);
    return 0;
}
