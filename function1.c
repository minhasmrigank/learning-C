#include<stdio.h>
int main()
{
puts("At the first raven was like :");
repeat(1);
puts("But then he was all :");
repeat(4);
return(0);
}

void repeat(int x)
{
  int a;
  for (a=0;a<x;a++)
  puts("Never more!!");
}
