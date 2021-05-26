#include<stdio.h>
#include<string.h>
int main()
{
    struct date{
                 int year,month,date;
                     };

    struct person{
                 char name[34];
                 struct date birthday;

                  };
                  struct person friend;
                  strcmp(friend.name,"George Washington");
                  friend.birthday.year=1775;
                  friend.birthday.date=23;
                  friend.birthday.month=2;

                  printf("My friend %s was born on %d/%d/%d\n",friend.name,friend.birthday.year,friend.birthday.month,friend.birthday.date);
                  return 0;
}

