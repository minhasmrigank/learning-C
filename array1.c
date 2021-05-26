#include<stdio.h>
#define MEAL 3
int main()
{
  int calories[MEAL];
  int x, total=0;
  puts("Calories counter");
  for(x=0;x<MEAL;x++)
  {
   printf("Calories at meal %d :",x+1);
   scanf("%d",&calories[x]);

  total=total+calories[x];
  }printf("You had total of %d calories. \n",total);
return 0;
}
