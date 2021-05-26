#include<stdio.h>
int main()
{
    int p=987;
    int *h;
    h = &p;
    printf("Address of p  is %p\n",&p);
    printf("Address of h is %p\n",h);
    printf("The value of p is %d\n",p);
    printf("The value of h is %d\n",*h);
    return 0;
}
