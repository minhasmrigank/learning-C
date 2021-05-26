#include<stdio.h>
int main()
{
  char ch='A';
  int num=1;

  while(ch<'D')

  {
    while (num<10)

    {
    printf("%c-%d\t",ch,num);
    num++;
    }
    printf("\n");
    ch++;
  }
  return 0;
}
