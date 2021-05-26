#include<stdio.h>
#include<ctype.h>
int main ()
{
 int a ;
 do {
     a= getchar();
     if(isdigit(a))
     putchar(a);
   }while(a!='\n');
   return 0;

}
