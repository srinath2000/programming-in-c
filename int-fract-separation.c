//program to read a floating point number from user and print its integer and fractional part separately
#include<stdio.h>
int main()
{
int a;
float num,b;
scanf("%f",&num);
a=num;
printf("%d\n",a);
b=num-a;
printf("%f\n",b);
return 0;
}
