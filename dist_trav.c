/*program to find the distance travelled using distance formula*/
#include<stdio.h>
int main()
{
	float s,u,a,t;
	printf("Enter the velovity , acceleration and time \n");
	scanf("%f%f%f",&u,&a,&t);
	s=((u*t)+(0.5*a*t*t));
	printf("the distance travelled is :%f \n",s);
	return 0;

}
