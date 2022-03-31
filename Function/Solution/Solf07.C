/*Wrie a program to create UDF sort() to sorting 5 integer array.*/

#include<stdio.h>
#include<conio.h>
void sort(int []);
void print(int []);
void main()
{
	int i,a[5];
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nEnter value a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	print(a);
	sort(a);
	getch();
}
void print(int a[])
{
	int i;
	printf("\n\nThe array have this values : ");
	for(i=0;i<5;i++)
	{
		printf("%d,",a[i]);
	}
	printf("\n\nEven numbers in the array are : ");
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
			printf("%d,",a[i]);
	}
}
void sort(int a[])
{
	int i,swap,j,p;
	for(i=0;i<5;i++)
	{
		p=i;
		for(j=i+1;j<5;j++)
		{
			if(a[p]>a[j])
				p=j;
		}
		if(p!=i)
		{
			swap=a[i];
			a[i]=a[p];
			a[p]=swap;
		}
	}
	printf("\n\nSorted array is : ");
	for(i=0;i<5;i++)
	{
		printf(" %d,",a[i]);
	}
}