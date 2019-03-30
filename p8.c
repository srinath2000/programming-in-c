#include<stdio.h>
int main()
{ int x,y,z;
  printf("Enter 3 nos: ");
  scanf("%d %d %d",&x,&y,&z);
  if(x>y && x>z)
  { if(y<z) 
     printf("max,min %d%d",x,y);
    else
     printf("max,min %d%d",x,z);
  }
  else if(y>x && y>z)
  { if(x<z)
     printf("max,min %d%d",y,x);
    else
     printf("max,min %d%d",y,z);
  }
  else 
  { if(x<y)
     printf("max,min %d%d",z,x);
    else
     printf("max,min %d%d",z,y);
  }
  return 0;
}