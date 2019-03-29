#include<stdio.h>
void main()
{ int x,y,z;
  printf("Enter 3 nos: ");
  scanf("%d %d %d",&x,&y,&z);
  if(x>y && x>z)
  { if(y<z) 
     printf("%d is max and %d is min",x,y);
    else
     printf("%d is max and %d is min",x,z);
  }
  else if(y>x && y>z)
  { if(x<z)
     printf("%d is max and %d is min",y,x);
    else
     printf("%d is max and %d is min",y,z);
  }
  else 
  { if(x<y)
     printf("%d is max and %d is min",z,x);
    else
     printf("%d is max and %d is min",z,y);
  }
}