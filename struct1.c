1.	Create an array of structures for storing student information. Each student’s information contains name, roll no, mark1, mark2, mark3 and mark4. Write a menu driven program to:
i.	Insert details of a student.
ii.	List the names of the students who have failed in more than 2 subjects.
iii.	List the class topper and subject wise topper.

#include<stdio.h>
struct st{
		char nm[50];
		float m1,m2,m3,m4,m5;
		float avg;
		int rno;}st[50];
		
void main()
{
	int n,i,f,top;
	printf("enter no of students");
	scanf("%d",&n);
	printf("enter details");
	for(i=0;i<n;i++)
		{	printf("\nname of student %d:",i+1);
			scanf("%s",st[i].nm);
			printf("rollno of student %d:",i+1);
			scanf("%d",&st[i].rno);
			printf("enter marks");
			printf("\ngraphics:");
			scanf("%f",&st[i].m1);
			printf("maths:");
			scanf("%f",&st[i].m2);
			printf("mechanics :");
			scanf("%f",&st[i].m3);
			printf("physics :");
			scanf("%f",&st[i].m4);
			printf("chemistry :");
			scanf("%f",&st[i].m5);
			st[i].avg=(st[i].m1+st[i].m2+st[i].m3+st[i].m4+st[i].m5)/5;
		}
		for(i=0;i<n;i++)
		{	f=0;
			if(st[i].m1<45)
			f++;
			if(st[i].m2<45)
			f++;
			if(st[i].m3<45)
			f++;
			if(st[i].m4<45)
			f++;
			if(st[i].m5<45)
			f++;
			if(f>2)
			printf("\n%s failed",st[i].nm);
		}
		int max=st[0].avg;
		for(i=0;i<n;i++)
		{	if(max<st[i].avg)
			{max=st[i].avg;
			top=i;}}
		printf("\ntopper of the class is:%s",st[top].nm);
		max=st[0].m1;
		for(i=0;i<n;i++)
		{	if(max<st[i].m1)
			{max=st[i].m1;
			top=i;}}
		printf("\ntopper graphics is:%s",st[top].nm);
		max=st[0].m2;
		for(i=0;i<n;i++)
		{	if(max<st[i].m2)
			{max=st[i].m2;
			top=i;}}
		printf("\ntopper maths is:%s",st[top].nm);
		max=st[0].m3;
		for(i=0;i<n;i++)
		{	if(max<st[i].m3)
			{max=st[i].m3;
			top=i;}}
		printf("\ntopper mechanics is:%s",st[top].nm);
		max=st[0].m4;
		for(i=0;i<n;i++)
		{	if(max<st[i].m4)
			{max=st[i].m4;
			top=i;}}
		printf("\ntopper physics is:%s",st[top].nm);
		max=st[0].m5;
		for(i=0;i<n;i++)
		{	if(max<st[i].m5)
			{max=st[i].m5;
			top=i;}}
		printf("\ntopper of chemistry is:%s",st[top].nm);
	}
		
		
