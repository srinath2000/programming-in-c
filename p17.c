#include<stdio.h>
#include<string.h>
int main()
{
	int s=0,i;
	char st[100],ch;
	i=0;
	printf("Enter the character:  ");
	scanf("%c",&ch);
	printf("Enter the string:  ");
	scanf("%s",st);
	
	while(st[i]!='\0')
	 {
	 	if(st[i]==ch)
       	 	s++;
	 	i++;
	 }
	 	printf("occurence: %d",s);
	 	
	 return 0;
	 	}