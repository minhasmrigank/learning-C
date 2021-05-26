#include<stdio.h>
int main()
{
 puts("Main function always runs first");
 display();
 puts("Thank you !");
 return 0;
}
void display ()
{
puts("Display function called");
}
