//program to convert a given temperature in celcius to farenheit
#include<stdio.h>
int main()
{
	int a;
	float b;
	printf("Enter the temperature in celcius  :\n");
	scanf("%d",&a);
	b=((a*9/5)+32);
	printf("The temperature in farenheit is :%f\n",b);
	return 0;
	
}
