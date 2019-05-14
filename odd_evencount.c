//program to count the no of odd and even numbers in an array
#include<stdio.h>
int *even(int a[],int m)
{
static int c[2];
int i,even=0,odd=0;
for(i=0;i<=m;i++)
{
if(a[i]%2==0)
{
even++;
}
else
odd++;

}
c[0]=even;
c[1]=odd;

return c;
}
int main()
{
int i,a[10],n;
int *p;
printf("enter the size of an array\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
p=even(a,n);
printf("no of even no is:%d\n odd no is:%d",*p,*++p);
}
