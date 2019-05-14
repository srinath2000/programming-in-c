//program to add two polynomials
#include<stdio.h>
struct pol
{
int coeff;
int exp;

}p1[20],p2[20],p[50];
void main()
{
int n1,i,q;
printf("\n enter the no of terms in the  polinomial\n");
scanf("%d",&n1);

for(i=n1;i>=0;i--)                //assigning exp
{
p1[i].exp=i;
p2[i].exp=i;
p[i].exp=i;
}
for(i=n1;i>=0;i--)                 //reading 1 pol
{
printf("\nenter the coeff:");
scanf("%d",&p1[i].coeff);

}
printf("2:");
for(i=n1;i>=0;i--)                //reading 2 pol
{
printf("\nenter the coeff:");
scanf("%d",&p2[i].coeff);
p[i].coeff=p1[i].coeff+p2[i].coeff;    //adding both coeff 
}
for(i=n1;i>=0;i--)              //printing 1st pol
{
printf("%dx^%d  ",p1[i].coeff,p1[i].exp); 
if(i!=( n1-1))
{
printf("+");
}
}
printf("\n");
for(i=n1;i>=0;i--)                              //printing 2nd pol
{
printf("%dx^%d  ",p2[i].coeff,p2[i].exp);
if(i!=( n1-1))
{
printf("+");
}
}
printf("\n");
printf("\n their sum is:");
for(i=n1;i>=0;i--)                            //printing after addition
{
printf("%dx^%d ",p[i].coeff,p[i].exp);
if(i!=( n1-1))
{
printf("+");
}

}
printf("\n");

}
