/* Writ a program to create structure inventory (iid,inmae,quantity,rate)enter 3 inventory details and print it.
	date:- 23-02-22
	author:- Chaudhari Tanmay Sureshbhai */
#include<stdio.h>
#include<conio.h>
struct inventory
{
	int iid[3],quantity[3],rate[10];
	char iname[3][10];
}iry;
void main()
{
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\n Enter id of item :");
		flushall();
		scanf("%d",&iry.iid[i]);
		printf("\n Enter name of item :");
		flushall();
		gets(iry.iname[i]);
		printf("\n Enter quantity of item :");
		flushall();
		scanf("%d",&iry.quantity[i]);
		printf("\n Enter rate of item :");
		flushall();
		scanf("%d",&iry.rate[i]);

	}
	clrscr();
	printf("\n Sr.no. Itemid. Itemname  Quantity  Rate");
	printf("\n ________________________________________________");
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("\n %d\t %d \t %s \t %d \t %d",i+1,iry.iid[i],iry.iname[i],iry.quantity[i],iry.rate[i]);
	}
	printf("\n");
	printf("\n ________________________________________________");
	printf("\n Plese press 'Enter' to place the order.");
	getch();
}
