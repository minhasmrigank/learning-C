#include<stdio.h>
int sub(int v);
int main()
{
    int x;
    printf("ENter a number:.\n");
    scanf("%d",&x);
    sub(x);
    printf("%d=%d-10",x);
    return 0;
}
int sub(int v)
{
    int a;
    a=v-10;
    return (a);
}
