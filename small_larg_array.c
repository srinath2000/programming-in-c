/*program to find the smallest and largest no in an array*/
#include<stdio.h>
void main()
{ int a[100],i,small,larg,n;
  printf("Enter total no: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  small=a[0];
  larg=a[0];
  for(i=0;i<n;i++)
   if(a[i]<small)
    small=a[i];
  for(i=0;i<n;i++)
   if(a[i]>larg)
    larg=a[i]; 
  printf("lar=%d\nsmall=%d",larg,small);
}
