/*program to print prime numbers in a given range */
#include<stdio.h>
int main()
{
	int a,b,j,i,d=1;
	printf("Enter the lower and upper limit  :\n");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
	d=0;
	for(j=2;j<=i-1;j++)
		{

		if (i%j==0)
		{ 
		d=1;
		break;
		}
		}

	if(d==0)
	{
		printf("%d \n",i);
	}
	
	
	}
	
return 0;
}
