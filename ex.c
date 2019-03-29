#include<stdio.h>
int main()
{ int i,j,n,m;
   printf("Enter no: ");
   scanf("%d",&n);
   m=n;
   for(i=0;i<=m;i++)
   { n=m;
     for(j=0;j<=i;j++)
     { printf("%d  ",n);
       n--;
     }
     printf("\n");
    }
}
    