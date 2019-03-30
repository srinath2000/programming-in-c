/*program to chechk if a numnber is prime or not*/
#include<stdio.h>
int main()
{
	int n,i,d=1;
	printf("Enter a number  :\n");
	scanf("%d",&n);
	for(i=2;i<n;i=i+1)
		{
		if (n%i==0)
		{d=0; break;}
		}
	if(d==1)
	{
		printf("The number is prime.... \n");
	}
	else 
	{
		printf("Not prime...  \n");
	}
	
	
return 0;
}
