#include<stdio.h>
int stack[20];
int top1=-1;
int top2=10;
void push(int item,int x)
{	
	if(x==1)
	{
		if(top1>=9)
			printf("Overflow!!!!!!");
		else
		{	top1++;
			stack[top1]=item;
		}
	}
	else
	{
		if(top2>=20)
			printf("Overflow!!!!!!");
		else
		{	top2++;
			stack[top2]=item;
		}
	}
	printf("\nPushed item is   :%d",item);
	}
	void pop(int x)
	{
	if(x==1)
	{
		if(top1==-1)
			printf("Underflow!!!!!");
		else
		{	
			printf("\nPoped item is   :%d",stack[top1]);
			
			top1--;
		}
	}
	else
	{
		if(top2==9)
			printf("Underflow");
		else
		{	
			printf("\nPoped item is:%d",stack[top2]);
			
			top2--;
		}
	}
		
	}
	void peep(int x)
	{
	if(x==1)
	{
		if(top1==-1)
			printf("underflow!!!!!");
		else
			printf("%d",stack[top1]);
	}
	else
	{
		if(top2==-1)
			printf("underflow!!!!!");
		else
			printf("%d",stack[top2]);
	}
		
	}
	void main()
	{
	int item,x,y;
	while(1)
	{	
		printf("\nStack1 or Stack2:");
		prinjtf("\n Enter ur choice as 1 or 2 ");
		scanf("%d",&y);
		printf("*********~*****~****~menu~****~*****~*******");
	        printf("\n1.~PUSH\n2.~POP\n3.~PEEP\n4.~IsEmpty\n5.~IsFull\n6.~Display\n7.~Exit\n  Enter your choice  :");
		scanf("%d",&x);
		switch(x)
		{	case 1:	printf("Enter the item  :");
				scanf("%d",&item);
				push(item,y);
				break;
			case 2:	pop(y);
				break;
			case 3:	peep(y);
				break;
			case 4:	if(y==1)
				{
					if(top1<=0)
						printf("Underflow!!!!!!");
					else
						printf("Stack is not empty!!!!");
				}
				else
				{
					if(top2<=10)
						printf("Underflow!!!!!!");
					else
						printf("Stack is not empty!!!!!!");
				}
				break;
			case 5:	if(y==1)
				{
					if(top1>=9)
						printf("Overflow!!!!!!!!");
					else
						printf("stack is not full!!!!!!!!");
				}
				else
				{
					if(top2>=20)
						printf("Overflow!!!!!!");
					else
						printf("stack is not full!!!!!!!!");
				}
				break;
			case 7:	
				break;
			case 6:	if(y==1)
				{	
					for(int i=top1;i>-1;i--)
						printf("%d\n",stack[i]);
				}
				else
				{
					for(int i=top2;i>10;i--)
						printf("%d\n",stack[i]);
				}	
				}		
				}
				}
