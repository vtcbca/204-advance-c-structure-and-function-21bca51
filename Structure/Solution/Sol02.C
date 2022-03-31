/* Writ a program to create structure marksheet (sid,snmae,m1,m2,m3,total,percentage)enter 3 inventory details and print it.
	date:- 23-02-22
	author:- Chaudhari TAnmay Sureshbhai */
#include<stdio.h>
#include<conio.h>
struct marksheet
{
	int sid[5],m1[5],m2[5],m3[5],total[5],per[5];
	char sname[5][10];
}ms;
void main()
{
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\n Enter id of student :");
		flushall();
		scanf("%d",&ms.sid[i]);
		printf("\n Enter name of student :");
		flushall();
		gets(ms.sname[i]);
		printf("\n Enter marks of subject 1 of student :");
		flushall();
		scanf("%d",&ms.m1[i]);
		printf("\n Enter marks of subject 2 of student :");
		flushall();
		scanf("%d",&ms.m2[i]);
		printf("\n Enter marks of subject 3 of student :");
		flushall();
		scanf("%d",&ms.m3[i]);
		ms.total[i]=ms.m1[i]+ms.m2[i]+ms.m3[i];
		ms.per[i]=ms.total[i]/3;
		clrscr();
	}
	printf("\n Marksheet of a students");
	printf("\n Sid\tname\tm1\tm2\tm3\ttotal\tper");
	printf("\n ________________________________________________\n");
	for(i=0;i<3;i++)
	{
		printf("\n %d\t%s\t%d\t%d\t%d\t%d\t%d",ms.sid[i],ms.sname[i],ms.m1[i],ms.m2[i],ms.m3[i],ms.total[i],ms.per[i]);
	}
	printf("\n ________________________________________________\n");
	getch();
}
