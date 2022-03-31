/* Write a program to print menu driven program and use different categories
   of funtion to perform following tasks :
   1.check it is a prime number or not.
   2.check it is palindrome number or not.
   3.print reverse number of the entered number.
   4.print even series till nth number.
   5.
   6.exit from menu.	*/
#include<stdio.h>
#include<conio.h>
void prime();
void palindrome();
void revnum();
void eveser();
void main()
{
	int no,i,ch;
	char choice;
	clrscr();
	do
	{
		clrscr();
		printf("\n\t\t\tMENU");
		printf("\n___________________________________________________");
		printf("\n\t\t1.check it is a prime number or not");
		printf("\n\t\t2.check it is palindrome number or not");
		printf("\n\t\t3.print reverse number of the enter number");
		printf("\n\t\t4.print even series till nth number");
		printf("\n\t\t5.exit from menu");
		printf("\n___________________________________________________");
		printf("\n\t\tEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter any number : ");
				scanf("%d",&no);
				flushall();
				prime(no);
				break;
			case 2:
				printf("\nEnter any number : ");
				scanf("%d",&no);
				flushall();
				palindrome(no);
				break;
			case 3:
				printf("\nEnter any number : ");
				scanf("%d",&no);
				flushall();
				revnum(no);
				break;
			case 4:
				printf("\nEnter any number : ");
				scanf("%d",&no);
				flushall();
				eveser(no);
				break;
			case 5:
				exit();
			default:
				printf("\nInvalid choice!!");
				break;
		}
		printf("\n\tDo you want ot continue this program if yes press 'Y/y' : ");
		flushall();
		scanf("%c",&choice);
	}while(choice=='Y'|| choice=='y');
	getch();
}
void prime(int no)
{
	int b=0,c;
	for (c=2;c<no;c++)
    {
	if(no%2==1&&no/no==1&&no%3!=0&&no%5!=0&&no%7!=0)
	{
	    printf("\n%d ", no);
	    b=1;
	    break;
	}
    }
    if(b==1)
	printf("\n\n it is a prime number\n\n");
    else
	printf("\n\n it is not a prime number\n\n");
}
void palindrome(int no)
{
	int b=0,c;
	c=no;
	while(no!=0)
	{
		b=b*10;
		b=b+no%10;
		no=no/10;
	}
	if(c==b)
	{
		printf("\n\n %d is a palindrome number.\n\n",c);
	}
	else
	{
		printf("\n\n %d  is not a palindrome number.\n\n",c);
	}
}
void revnum(int no)
{
	int b=0;
	while(no!=0)
	{
		b=b*10;
		b=b+no%10;
		no=no/10;
	}
	printf("\n\n %d\n\n",b);
}
void eveser(int no)
{
	int i;
	for(i=2;i<=no;i++)
	{
		if(i%2==0)
			printf("%d,",i);
	}
	printf("\n\n");
}