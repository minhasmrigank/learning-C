#include<stdio.h>
int main()
{
  int a;
  printf("Enter an integer :");
  scanf("%d",&a);
  if(a>10)
  {
      printf("You entered %d.\n",a);
  printf("%d is greater than 10.",a);
}

else if (a<10)
{
    printf("you entered %d\n",a);
    printf("%d is less than 10.",a);
}
else{
    printf("you entered %d\n",a);
    printf("%d is equal to 10",a);
}
    return(0);
}
