/*program to find the area and circumference of a circle*/
#include<stdio.h>
int main()
{
	float r,a,c;
	printf("Enter the radius :\n");
	scanf("%f",&r);
	a=(3.14*r*r);
	c=(2*3.14*r);
	printf("%f\n%f\n",a,c);
	

}
