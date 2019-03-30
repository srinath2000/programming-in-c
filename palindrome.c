/*program to reverse a number and check whether it is palindrome*/
#include<stdio.h>
int main()
{
	int n,sum=0,rem=0,rev;
	printf("Enter a number  :\n");
	scanf("%d",&n);
	rev=n;
	while(n>0)
	{
		rem=n%10;
		sum=rem+(sum*10);
		n=n/10;
	}
	
	if(sum==rev)
	{
		printf("The number is palindrome.... \n");
	}
	else 
	{
		printf("Not palindrome...  \n");
	}
return 0;
}
