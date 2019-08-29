#include<stdio.h>
int stack[100],top=-1,i,n;
void push();
void pop();
void peep();
void display();
int main()
{
 int choice;
printf("Enter the size of stack   :");
scanf("%d",&n);
do
{
 printf("\n ***************~.~MENU~.~***************"); 
 printf("\n1.PUSH \n 2.POP \n 3.PEEP \n 4.DISPLAY \n5.EXIT\n "); 
 printf("\nEnter choice :");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
        push();
        break;
  
  case 2:
        pop();
        break;
  case 3:
        peep();
        break;
  
  case 4:
        display();
        break;
  case 5:break;
  default:printf("\n invalid !!!!!");
          break;
  }
}while(choice!=5);
}
void push()
{
 int item;
 if(top==n-1)
 {
  printf("Overflow !!!!!!!");
 }
 else
{
 printf("\n Enter element to be pushed  :");
 scanf("%d",&item);
 top=top+1;
 stack[top]=item;
}
}
void pop()
{
 int item;
 if(top==-1)
{
 printf("UNDERFLOW !!!!!");
}
else
{
 item=stack[top];
 top=top-1;
printf("\nPopped element=%d \n",item);
}
}
void peep()
{
 if(top==-1)
{
 printf("Empty stack!!!!!!");
}
else
{
 printf("Top=%d\n",stack[top]);
}
 
}
void display()
{
 int i;
if (top==-1)
{
 printf("STACK IS EMPTY");
}
else
{
 printf("\nStack elements:\n");
 for(i=top;i>=0;i--)
 {
  printf("%d\n",stack[i]);
 }
}
}

