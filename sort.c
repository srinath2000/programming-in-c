//program to search a particular element from a list of n numbers using Binary search. Sort the list using Bubble sort. 
#include<stdio.h>
void sort(int *p,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(p+i)<*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
}




int main()
{
int	f=0,l,mid,a[20],n,i,s,flag;
printf("Enter the no of Elements");
	scanf("%d",&n);
	printf("Enter the Elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nBefore Sorting the Entered Elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}	
	sort(a,n);
		printf("\nAfter Sorting the Entered Elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
printf("\nEnter the Element to be Searched\n");
scanf("%d",&s);
l=n-1;
mid=(f+l)/2;
while(f<=l)
{
	if(a[mid]==s)
	{
		printf("Element Found at %d position",mid+1);
		break;
	}
	else if(a[mid]<s)
	f=mid+1;
	else
	l=mid-1;
	mid=(f+l)/2;
}
if(f>l)
printf("Element not found");
}
