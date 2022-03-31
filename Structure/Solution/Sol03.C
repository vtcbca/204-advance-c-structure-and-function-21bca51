#include<stdio.h>
#include<conio.h>
struct employee
{
	int id;
	long int basic;
	char ename[30],dept[30];
}emp;
void main()
{
	int i,j,no,check;
	long int nbasic,da,hra,pf,gross;
	char ch;
	clrscr();
	for(i=0;i<1;i++)
	{
		printf("\nEnter employee id : ");
		flushall();
		scanf("%d",&emp.id);
		printf("\nEnter employee name : ");
		flushall();
		gets(emp.ename);
		printf("\nEnter employee basic salary : ");
		flushall();
		scanf("%d",&emp.basic);
		printf("\nEnter employee department : ");
		flushall();
		gets(emp.dept);
	}
	do
	{
		printf("\n\t\t\tCompany Employees Tab");
		printf("\n__________________________________________________");
		printf("\n\t\t1.Print salary slip of employee.");
		printf("\n\t\t2.Search employee based on employee id.");
		printf("\n\t\t3.Search employee based on dept.");
		printf("\n\t\t4.Sort record based on salary.");
		printf("\n\t\t5.Sort record based on employee name.");
		printf("\n\t\t6.To exit from loop.");
		printf("\n__________________________________________________\n\t\t");
		scanf("%d",&no);
		clrscr();
		switch(no)
		{
			case 1:
				printf("\n\tEnter employee id : ");
				scanf("%d",&check);
				for(i=0;i<1;i++)
				{
					if(check==emp.id)
					{

						nbasic=emp.basic;
						break;
					}
				}
				da=5*nbasic/100;
				hra=5*nbasic/100;
				pf=10*nbasic/100;
				gross=nbasic+da+hra-pf;
				printf("\n\t\t\tSalary slip of employee");
				printf("\n_________________________________________________________");
				printf("\nBasic \tDA \tHRA \tPF \tGross");
				printf("\n\n%ld \t%ld \t%ld \t%ld \t%ld",nbasic,da,hra,pf,gross);
				printf("\n_________________________________________________________");
				break;
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
				exit(0);
			default:
				printf("Invalid Choice!(please enter correct choice)");
				break;
		}
		printf("\n\tDo you want to try again.(If yes press 'y' or 'Y')");
		flushall();
		scanf("%c",&ch);
	}while(ch=='Y'&&ch=='y');
	getch();
}
