/* Write a program to create a udf even_odd which check given number is even or odd.*/
#include<stdio.h>
#include<conio.h>
void even_odd();
void main()
{
	clrscr();
	even_odd();
	getch;
}
void even_odd()
{
	int no,i;
	printf("\nEnter a number to check it is even or odd : ");
	scanf("%d",&no);
	if(no%2==0)
	{
		printf("\nIt is a even number.");
	}
	else
	{
		printf("\nIt is a odd number.");
	}
}
