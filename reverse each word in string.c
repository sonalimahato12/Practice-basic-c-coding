
#include<stdio.h>
#include<string.h>
 
int main()
{
   char sentence[20];
   char str[20];
   gets(sentence);
 	printf("\n");
   int i = 0, j = 0;
   
   while (sentence[i] != '\0') 
   {
       // When you encounter space that means you have got the word
      if (sentence[i] != ' ') 
	  {
         str[j] = sentence[i];
         j++;
      }
	   else 
	  {
         str[j] = '\0';
         // Reversing and printing the word
         printf("%s", strrev(str));
         printf(" ");
         j = 0;
      }
      i++;
   }
 
   str[j] = '\0';
   // Reversing and printing last word
   printf("%s", strrev(str));
 
  return 0;
}
