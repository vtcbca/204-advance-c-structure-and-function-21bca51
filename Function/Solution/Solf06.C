/*
  */
#include<stdio.h>
#include<conio.h>

void input();
void even(int []);
void main()
{
	clrscr();
	input();
	getch();
}
void even(int x[5])
{
	int i,x[5];
	for(i=0;i<5;i++)
	{
		if(x[i]%2==0)
			printf("\n%d",x[i]);
	}
} 
void input()
{
	int i,a[5];
	for(i=0;i<5;i++)
	{
		printf("\nEnter value a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	even(a);
}