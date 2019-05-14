//program to replace a substring with another in a given sentence.
#include<stdio.h>
#include<string.h>
void main()
{	char st[20][20],sr[20],rp[20];int flag=0;
	printf("enter no of words");
	int i,j,k,n;
	scanf("%d",&n);
	printf("enter your sentence: ");
	for(i=0;i<n;i++)
		scanf("%s",st[i]);
	printf("enter word to be searched: ");
	scanf("%s",sr);
	for( j=0;j<n;j++)
		if(strcmp(sr,st[j])==0)
			{printf("enter word to be replaced: ");
				scanf("%s",rp);
				strcpy(st[j],rp);
				flag=1;}
	if(flag==0)
	printf("no such word");
	else
	for(k=0;k<n;k++)
		printf("%s ",st[k]);
	}
							
	
