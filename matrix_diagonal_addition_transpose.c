/*program to do the following operations on an n x n matrix
a) Matrix addition.
b) Sum of diagonal elements
c) Transpose of a matrix.*/
#include<stdio.h>
#include<string.h>
int main()
{ 
int i,j,a[100][100],b[100][100],n,s,ds=0;
  printf("Enter   no and elements  : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
   for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
  for(i=0;i<n;i++)
  {for(j=0;j<n;j++)
    if(i==j) ds+=a[i][j];}
  printf(" the sum of Diagonal elements is : %d\n",ds);
  for(i=0;i<n;i++)
   for(j=0;j<n;j++)
    b[j][i]=a[i][j];
printf("the Transpose : ");
   for(i=0;i<n;i++)
   { 
   for(j=0;j<n;j++)
      printf("%d ",b[i][j]); 
     printf("\n");
   }  
   printf("Enter the second matrix: ");
   for(i=0;i<n;i++)
   for(j=0;j<n;j++)
    scanf("%d",&b[i][j]);
   for(i=0;i<n;i++)
   for(j=0;j<n;j++)
    a[j][i]=a[i][j]+b[i][j];
    printf("sum = \n");
   for(i=0;i<n;i++)
   { 
   for(j=0;j<n;j++)
      printf("%d ",a[i][j]); 
     printf("\n");
   }  
   return 0;
}
