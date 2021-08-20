
//count permutations of a string
//i/p:abc
//o/p:6    (explaination:3!=6 .... factorial of lenght of the string .
//if any character will be repeated then frequency of the character will be divided with factorial of length ex=abbc   4!/2!    abbcc=5!/(2! * 2!)
#include<stdio.h>
#include<string.h>
int fact(int n){
    
    if(n == 0 || n == 1 )
      return 1;
    else
        return n*fact(n-1);
}
int permu(char s[],int l){
    int count[26]={0},i,f;
    for(i=0;i<l;i++)
    {
        count[s[i]-'a']++;
    }
    f=fact(l);
    for(i=0;i<26;i++)
    {
        if(count[i]>1){
            f/=(fact(count[i]));
        }
    }
    return f;
}
int main(){
    char s[100];
    char *p=&s[0];
    int res;
    gets(s);
    int l=strlen(s);
    res=permu(p,l);
    printf("%d",res);
}
