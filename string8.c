#include<stdio.h>
#include<string.h>
int main()
{
 char string[60];
 int len;

 printf("The Feeling is :\n");
 fgets(string,60,stdin);
  len=strlen(string);
 printf("The length of the string is :%d",len);
return 0;
}
