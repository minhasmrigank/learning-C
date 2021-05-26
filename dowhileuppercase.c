#include<stdio.h>
#include<ctype.h>
int main()
{
int a;
do {
     a=getchar();
     a=toupper(a);
     putchar(a);
   }while(a!='\n');
   return 0;
}
