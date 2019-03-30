#include<stdio.h>
int main()
{
	float a,b,r;
	int ch;
	printf("Enter the two numbers :    \n");
	scanf("%f%f",&a,&b);
	printf(" ********MENU*********\n");
	printf(" 1.Addition    \n");
	printf(" 2.subtraction    \n");
	printf(" 3.Multiplication    \n");
	printf(" 4.Division   \n");
	printf(" Enter your choice  :      \n");
	scanf("%d",&ch);
	if(ch==1)
	{
		r=a+b;
		printf("The result is  :%f \n",r);
		}
	else if(ch==2)
	{
		r=a-b;
		printf("The result is  :%f  \n",r);
		}
	else if(ch==3)
	{
		r=a*b;
		printf("The result is  :%f  \n",r);
		}
	else if(ch==4)
	{
		r=a/b;
		printf("The result is  :%f  \n",r);
		}
	else
	{
		
		printf("Invalid choice !!!!!\n");
		}
		
	return 0;
	}
			
			
			
			
	