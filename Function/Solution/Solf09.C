/* Write a program to create strVowel which count and print total number of vowel in a string.

	Date :- 21-2-22
	Author:- Tanmay S. Chaudhari
	*/
#include<stdio.h>
#include<conio.h>
void strVowel(char []);
void main()
{
	char name[10];//name contain a string which have 9 charactar.
	int i;
	clrscr();
	printf("\n Enter a string : ");
	gets(name);
	strVowel(name);
	getch();
}

//strVowel function to check vowel and print it from each string.
void strVowel(char name[10])
{
	int i,c=0;
	printf("\n");
	for(i=0;i<10;i++)
	{
		switch(name[i])
		{
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':
				printf("%c ",name[i]);
				c++;
				break;
		}
	}
	printf("\n Number of vowels in %s is %d.\n",name,c);
}
