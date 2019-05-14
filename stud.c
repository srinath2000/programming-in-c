//program to read the name, rollno, mark of 3 students into a file using a structure
#include<stdio.h>
struct stud
{
	int rollno;
	char name[50];
	int mark[3];
}s[3];
int main()
{
	for(int i=0;i<3;i++)
	{
		printf("Enter the name ");
		scanf("%s",s[i].name);
		s[i].rollno=i+1;
		for(int j=0;j<3;j++)
	                scanf("%d",&s[i].mark[j]);
	}
	FILE *p;
        p=fopen("student.txt","w");
	for(int i=0;i<3;i++)
	        fprintf(p,"%d%s%d%d%d",s[i].rollno,s[i].name,s[i].mark[0],s[i].mark[1],s[i].mark[2]);
	fclose(p);
}

