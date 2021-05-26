#include<stdio.h>
#include<ctype.h>

void smart (char *input);
int main ()
{
    char string[90];
    printf("Type some text:.\n");
    fgets(string,90,stdin);
    smart(string);
    printf("You are smart Mrigank!!:%s",string);
    return 0;

}
void smart (char *input)
{
    while(*input)
    {
        *input=toupper(*input);
        input++;
    }
}
