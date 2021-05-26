#include<stdio.h>
int main()
{
  struct person{

  char name[200];
  int age;
  }president={"George Washington",67};


  printf("%s was %d years old.\n",president.name,president.age);
  return 0;
}
