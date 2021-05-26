#include<stdio.h>
#include<string.h>
int main()
{
 char s[]="I will get a dream job, ";
 char b[]="soon it will be stepping in.";
 char a[100];
 strcpy(a,s);
 strcat(a,b);
 printf("%s",a);
 return 0;
}
