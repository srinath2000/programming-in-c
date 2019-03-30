/*program to check whether the given number is Armstrong or not*/
#include<stdio.h>
int main()
{
	int n,sum=0,rem=0,rev;
	printf("Enter a number  :\n");
	scanf("%d",&n);
	rev=n;
	while(n>0)
	{
		sum=n%10;
		rem=rem+(sum*sum*sum);
		n=n/10;
	}
	if(rev==rem)
	{
		printf("The number is armstrong.... \n");
	}
	else 
	{
		printf("Not armstrong...  \n");
	}
	
return 0;
}
