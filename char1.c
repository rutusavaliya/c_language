#include<stdio.h>
int main()
{

        char arr1[100],arr2[100],i,j;

      printf("enter the string:");
      gets(arr1);
      printf("your string is :%s",arr1);

      printf("\n enter the second string :");
      gets(arr2);
      printf("your string is :%s",arr2);

      for(i=0;arr1[i]!='\0';i++){}
      printf("\n length of your string is:%d",i);

      for(j=0;arr2[j]!='\0';j++,i++){
     arr1[i]=arr2[j];
      }

      arr1[i]='\0';
      printf("\n marge :");
      puts(arr1);    
}