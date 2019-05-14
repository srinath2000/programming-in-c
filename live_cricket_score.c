//program to print the live cricket score during a one day match
#include<stdio.h>
#include<string.h>
struct cricket
{
	int overs_a;
	int balls_a;
	int runs_a;
	int wickets_a;
}s1,s2;


void main()
{
	s1.overs_a=10;
	s1.balls_a=6;
	s1.runs_a=0;
	s1.wickets_a=10;
	s2.overs_a=10;
	s2.balls_a=6;  //only six balls are taken into count in order to run the program easily.Hence only one over..
	s2.runs_a=0;
	s2.wickets_a=10;
	printf("******************************************************ONE DAY MATCH*********************************************************\n");
	printf("****************************************************************************************************************************\n");
	int i,f,r,j=0,w1=0,w2=0;
	char ch[10];
	char choice_1[10];
	while(j==0)
	{
		printf("Choose the batting team  :  TEAM A OR TEAM B  :  ");
		scanf("%s",choice_1);
		printf("\t\t******************FIRST INNINGS*********************\n");
			printf("\t\t*********currently team %s is batting**************\n",choice_1);
			printf("runs:%d\nballs:%d\novers%d\nwicket:%d",s1.runs_a,s1.balls_a,s1.overs_a,s1.wickets_a);
			for (i=0;i<=5;++i)
			{
						printf("\nEnter the no of runs taken :");
						scanf("%d",&f);
						if (f==0)
					{
					printf("******wicket lost or not*******\n");
					printf("if yes enter y\n");
					printf("if no enter n\n");
					scanf("%s",ch);
					if ((strcmp(ch,"y")==0)||(strcmp(ch,"Y")==0)||(strcmp(ch,"yes")==0))//string compare function used in order to compare the entered choice..
					{
						s1.wickets_a-=1;
						s1.balls_a-=1;
					printf("***********OUT!!!!************\n");
					break;                           //only one wicket is considered to run the program easily..
				}
			}
				if(f!=0)
				{
						s1.runs_a+=f;
						s1.balls_a-=1;
				}
				 if(f>6)
					printf("***********INVALID**********\n");//if the entered "no of runs taken"  is greater than six then an invalid messege is displayed..
					if(s1.balls_a%6==0)
					s1.overs_a-=1;	
					printf("|no of OVERS left :%d    |\n|no of BALLS left :%d     |\n|no of RUNS taken :%d     |\n|no of WICKETS left :%d  |\n ",s1.overs_a,s1.balls_a,s1.runs_a,s1.wickets_a);
					
					if(s1.wickets_a==0)
					{
						printf("\t\t***************TEAM-%s 's BATTING IS OVER ***************",choice_1);
						printf("\t\t*********************************************************");
						break;
					}
			}
				if(strcmp(choice_1,"b")==0||strcmp(choice_1,"B")==0||strcmp(choice_1,"team b")==0)
				printf("\t\t*******TEAM A needs %d runs to win***********\n",s1.runs_a+1);
			else
				printf("\t\t***********TEAM B needs %d runs to win*************\n",s1.runs_a+1);
			j=1;
	}
	while(j==1)
	{
		printf("Choose the batting team  :  TEAM A OR TEAM B");
		scanf("%s",choice_1);
		printf("\t\t*************SECOND INNINGS****************\n");
			printf("*********currently team %s is batting**************\n",choice_1);
			printf("runs:%d\nballs:%d\novers%d\nwicket:%d",s2.runs_a,s2.balls_a,s2.overs_a,s2.wickets_a);
			f=0;
			for (i=0;i<=5;++i)
			{
				printf("\nEnter the no of runs taken  :");
					scanf("%d",&f);
					if (f==0)
					{
					printf("******wicket lost or not*******\n");
					printf("if yes enter y\n");
					printf("if no enter n\n");
					scanf("%s",ch);
					if ((strcmp(ch,"y")==0)||(strcmp(ch,"Y")==0)||(strcmp(ch,"yes")==0))
					{
						s2.wickets_a-=1;
						s2.balls_a-=1;
					printf("***********OUT***********\n");
					break;
				}
			}
				if(f!=0)
				{
						s2.runs_a+=f;
						s2.balls_a-=1;
				}
				 if(f>6)
					printf("***********INVALID**********\n");
					if(s2.balls_a%6==0)
					s2.overs_a-=1;
					
					printf("|no of OVERS left :%d    |\n|no of BALLS left :%d     |\n|no of RUNS taken :%d     |\n|no of WICKETS left :%d  |\n ",s2.overs_a,s2.balls_a,s2.runs_a,s2.wickets_a);
					if(s2.wickets_a==0)
					{
						printf("\t\t********TEAM%s 's BATTING IS OVER  *********\n",choice_1);
						break;
					}
					if(s2.runs_a>s1.runs_a)
					{
						break;
					}
			}
					if ((strcmp(choice_1,"A")==0)||(strcmp(choice_1,"a")==0))
       				{
            			if ((s1.runs_a) > (s2.runs_a))
            			{
            			w1=s1.runs_a-s2.runs_a;
                		printf("\t\t****************************Team A wins by %d runs*******************************",w1);
                		printf("\t\t*********************************************************************************");
                		}
            			else
            			{
            			w2=(s2.runs_a-s1.runs_a)+1;
                		printf("\t\t*************************Team A loses by %d runs*********************************",w2);
                		printf("\t\t*********************************************************************************");
                		}
        			}
        			else
					{
            			if ((s2.runs_a) > (s1.runs_a))
            			{
            			w1=s2.runs_a-s1.runs_a;
                		printf("\t\t************************Team B wins by %d Runs*********************************** ",w1);
                		printf("\t\t*********************************************************************************");
                		}
            			else
            			{
            			w2=(s1.runs_a-s2.runs_a)+1;
                		printf("\t\t*************************Team B loses by %d runs*********************************",w2);
						printf("\t\t*********************************************************************************"); 
						}
					}
    }
}
