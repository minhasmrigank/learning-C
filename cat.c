#include<stdio.h>
#include<string.h>
int main()
{
  char a[10];
  char b[10];
  char c[30];
  printf("Enter your first name:\n");
  fgets(a,10,stdin);
  printf("Enter your last name:\n");
  fgets(b,10,stdin);
  strcpy(c,a);
  strcat(c,b);
  printf("Your full name is:");
  puts(c);
  return 0;


}
