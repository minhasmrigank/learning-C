#include<stdio.h>
int main()
{
    char a,b,c,*p;
    a='A';
    p=&a;
    b=*p;
    p=&c;
    *p='Z';
printf("Values of a,b,c=%c,%c,%c\n",a,b,c);
return 0;
}
