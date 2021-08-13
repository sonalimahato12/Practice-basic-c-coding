//find the  lengest word in the given sentence 
//i/p:I love My Country 
//0/p:Country                    (explain:country=7)
#include <stdio.h>
#include<string.h>
int
main ()
{
  char s[100], b[100], c[100];
  int i = 0, j = 0, l = 0;
  gets (s);
  for (i = 0; s[i] != '\0'; i++)
    {
      if (s[i] != ' ' && s[i] != '\0')
	{
	  b[j++] = s[i];
	}
      else
	{
	  b[j] = '\0';
	  if (strlen (b) > l)
	    {
	      strcpy (c, b);
	      l = strlen (b);
	    }
	  j = 0;
	}
    }
    b[j]='\0';
    if (strlen (b) > l)
    {
      strcpy (c, b);
    }
  puts (c);
  return 0;
}

