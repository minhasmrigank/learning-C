#include<stdio.h>
int main()
{
int a ;
printf("Enter your choice in binary (1,2,3):");
scanf("%d",&a);

switch(a)
{
  case 1 : puts("Excellent choice");
  break;
  case 2 : puts("Most common choice");
  break;
  case 3 : puts("I question your choice");
  break;
  default : puts("INVALID CHOICE!!");
  }
return(0);
}
