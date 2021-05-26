#include<stdio.h>
int main()
{
char name[60];
printf("Enter your name :");
fgets(name,60,stdin);
printf("Your name is :%s",name);
return(0);
}
