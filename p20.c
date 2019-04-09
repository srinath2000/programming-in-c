//Program to replace a substring with another in a given sentence
#include<stdio.h>
#include<string.h>
void main()
{
int n,i=0,flag=0;
char str[20][20],replace[20][20],string[20][20];
printf("Enter the no of strings :\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("Enter the string :\n");
	scanf("%s",str[i]);
}
for(i=0;i<n;i++)
{
	
	printf("%s",str[i]);
	}
printf("Enter the string to replace :\n");
scanf("%s",replace);
printf("Enter the string to be replaced with \n:");
scanf("%s",string);
for (i=0;i<n;i++)
{
	if(strcmp(replace,str[i])==0)
	{
		strcpy(str[i],string);
		flag=1;
	}
}
if(flag==0)
{
	printf("The word you entered is not present!!!!!\n");
}
else
{
	for(i=0;i<n;i++)
	{
		printf("%s",str[i]);
	}
}

}
