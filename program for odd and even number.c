//here is the program for odd and even number
#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	printf("enter any number here and i will tell you that it is odd or even, \n ");
	scanf("%d",&a);

	if (a % 2==0)
	{
		printf("your number is even",a);
	}
	else 
	{
		printf("your number is odd",a);
	}
	_getch();
 }
