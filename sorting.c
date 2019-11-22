#include<stdio.h>
#include<stdlib.h>
void bubble()
{	int a[20],n;	
	printf("enter size");
	scanf("%d",&n);	
	printf("enter elements\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int temp;	
	for(int i=0;i<n;i++)
		for(int j=0;j<n-1;j++)
			if(a[j]>a[j+1])
				{	temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
	printf("sorted array:");
	for(int i=0;i<n;i++)
	printf("%d,",a[i]);
	
}
void insert(int e,int a[],int i)
{	a[0]=e;
	while(e<a[i])
	{	a[i+1]=a[i];
		i--;
	}
	a[i+1]=e;
}
void insertsort()
{	int a[20],n;	
	printf("enter size");
	scanf("%d",&n);	
	printf("enter elements\n");
	for(int i=1;i<n+1;i++)
	scanf("%d",&a[i]);
	int j;
	for(j=2;j<n+1;j++)
		insert(a[j],a,j-1);
	printf("sorted array:");
	for(int i=1;i<n+1;i++)
	printf("%d,",a[i]);
}
void selection()
{	int a[20],n;	
	printf("enter size");
	scanf("%d",&n);	
	printf("enter elements\n");
	for(int i=0;i<n;i++)
	scanf("%d,",&a[i]);
	int j,temp;
	for(int i=0;i<=n-2;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
				{	temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			
	printf("sorted array:");
	for(int i=0;i<n;i++)
	printf("%d,",a[i]);
	
}
void quicksort(int a[],int low,int high)
{	int temp;int i,j,k;
	if(low<high)
	{	
		i=low;
		j=high;
		k=low;
		while(i<j){ 
			while(a[i]<=a[k] &&i<= high)
			{	i++;
					}
			while(a[j]>a[k]&&j>=low){
				j--;}
			if(i<j)
			{	temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
		temp=a[j];
		a[j]=a[k];
		a[k]=temp;
		quicksort(a,low,j-1);
		quicksort(a,j+1,high);
	}
}
void merge(int a[],int l,int mid,int u)
{	int i,j,k,c[20];
	i=l;
	j=mid+1;
	k=l;
	while(i<=mid&&j<=u)
	{	if(a[i]<=a[j])
			{c[k]=a[i];
			 i++;k++;
			 }
		else
		{	c[k]=a[j];
			j++;k++;
		}
	}
	/*if(i>mid&&j<=u)
	{	for(int m=j;m<=u;m++)
		{	c[k]=a[m];k++;}
	}
	if(i<=mid&&j>u)
	{	for(int n=i;n<=mid;n++)
		{c[k]=a[n];k++;}
	}*/
	
	while( i <= mid )
		c[k++]=a[i++];
	
	while( j <= u )
		c[k++]=a[j++];
	for(int m=l;m<=u;m++)
	a[m]=c[m];
}	
	
void mergesort(int a[],int l,int u)
{	int mid;	
	if(l!=u)
	{	mid=(l+u)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,u);
		merge(a,l,mid,u);
	}
}
void main()
{	int c=1;
	while(c!=0)
	{	printf("\n>>>>>>>>>>>>>>>>>>>>>>>MENU<<<<<<<<<<<<<<<<<<<<<\n~1.BUBBLE SORT\n~2.INSERTION SORT\n~3.SELECTION SORT\n~4.QUICK SORT\n~5.MERGE SORT\n~6.EXIT");
		printf("\nenter your choice!  :-");
		scanf("%d",&c);
		switch(c)
		{	case 1:bubble();break;
			case 2:insertsort();break;
			case 3:selection();break;
			case 4:{int a[20],n;	
				printf("enter size");
				scanf("%d",&n);	
				printf("enter elements :-\n");
				for(int i=0;i<n;i++)
				scanf("%d",&a[i]);			
				quicksort(a,0,n-1);
				printf("sorted array:-");
				for(int i=0;i<n;i++)
				printf("%d,",a[i]);break;}
			case 5:{int a[20],n;	
				printf("enter size:-");
				scanf("%d",&n);	
				printf("enter elements:-\n");
				for(int i=0;i<n;i++)
				scanf("%d",&a[i]);			
				mergesort(a,0,n-1);
				printf("sorted array:-");
				for(int i=0;i<n;i++)
				printf("%d,",a[i]);break;}

			case 6:exit(0);
		}
	}
}
