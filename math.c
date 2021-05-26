#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,e,f,g,h,i;
printf("Enter the value of variable a and b:\n");
scanf("%f%f",&a,&b);
c=a+b;
printf("Addition of two numbers %f+%f=%f\n",a,b,c);
d=a-b;
printf("Subtraction of these two numbers %f -%f=%f\n",a,b,d);
e=a*b;
printf("Multiplication of these two numbers %f*%f=%f\n",a,b,e);
f=a/b;
printf("Division of these two numbers %f/%f=%f\n",a,b,f);
g=pow(a,b);
printf("Exponent of a to b is : %f\n",g);
h=sqrt(a);
printf("Square root of a is %f\n",h);
i=sqrt(b);
printf("Square root of b is : %f\n",i);
return(0);
}
