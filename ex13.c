#include<stdio.h>
void main()
{ int r,i,j,cal=1,sp;
  printf("Enter rows: ");
  scanf("%d",&r);
  for(i=0;i<r;i++)
  { for(sp=0;sp<=r-i;sp++)
     printf(" ");
    for(j=0;j<=i;j++)
    { if(j==0||i==0) 
       cal=1;
      else
       cal=cal*(i-j+1)/j;
      printf("%3d",cal);
    }
    printf("\n");
  }
}