#include<stdio.h>
int main ()
{
    char ch[20];
    int i,len;
    printf("enter a string \n");
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        len++;
    }
      printf("\n reverse string is :");
      for(;len>=0;len--)
      {
        printf("%c",ch[len]);
      }
}