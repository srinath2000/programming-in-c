/* menu driven program to find the area of the following geometrical shapes.
a. Rectangle b. Circle c. Triangle d. Square*/
#include<stdio.h>
int main()
{
	float a,b,r;
	int ch;
	printf(" ********MENU*********\n");
	printf(" 1.triangle  \n");
	printf(" 2.rectangle   \n");
	printf(" 3.square   \n");
	printf(" 4.circle  \n");
	printf(" Enter your choice  :      \n");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("Enter the base and height :    \n");
		scanf("%f%f",&a,&b);
		r=(0.5*a*b);
		printf("The result is  :%f \n",r);
		}
	else if(ch==2)
	{
		printf("Enter the length and breadth  :    \n");
		scanf("%f%f",&a,&b);
		r=a*b;
		printf("The result is  :%f  \n",r);
		}
	else if(ch==3)
	{
		printf("Enter the side :    \n");
		scanf("%f",&a);
		r=a*a;
		printf("The result is  :%f  \n",r);
		}
	else if(ch==4)
	{
		printf("Enter the radius :    \n");
		scanf("%f",&a);
		r=3.14*a*a;
		printf("The result is  :%f  \n",r);
		}
	else
	{
		
		printf("Invalid choice !!!!!\n");
		}
		
	return 0;
	}
