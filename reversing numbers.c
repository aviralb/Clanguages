//here is the for loop funda
#include<stdio.h>
#include<conio.h>


void main()
{
	int i,revn=0,rem;
	printf("enter any number \n");
	scanf("%d", &i);
	while (i != 0)
	{
		rem = i % 10;
		revn = revn * 10 + rem;
		i /= 10;
	}
		printf("Reversed Number = %d", revn);
		_getch();
	}

