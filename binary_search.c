//search an element using pointers
#include<stdio.h>
void main()
	{
 	int a[100],n,flag=0,s,i, *p;
 	p=a;
 	printf("Enter the number of elements:");
 	scanf("%d",&n);
 	printf("Enter the elements:-");
 	for( i=0;i<n;i++) 
	{  	
	scanf("%d",(p+i));
	}
 	printf("Enter the element to be searched:");
 	scanf("%d",&s);
	for( i=0;i<n;i++)
 	{
  	if(s==*(p+i))
   	flag=1;
 	}
 	if(flag==1)
  		printf("Entered number found");
 	else
  		printf("Entered number not found");
 
	}

