
Conversation opened. 1 unread message.

Skip to content
Using Gmail with screen readers

2 of 208
converting
Inbox
x

AVIRAL BHARDWAJ
Attachments
2:08 PM (3 hours ago)
to me


Attachments area

//convert digit to numbers
#include<stdio.h>
#include<conio.h>
#include<process.h>

int main()


{
	int n, num = 0;
	//taking input from user
	printf(" Enter Your number And I will Convert it into Word \n");
	scanf("%d", &n);


	while (n != 0)
	{
		num = (num * 10) + (n % 10);
		n = n / 10;

	}
	while (num!=0)

	{
		switch(num%10)
		{
		case 0:
			printf(" Zero ");
			break;
		case 1:
			printf(" one");
			break;
		case 2:
			printf(" two");
				break;
		case 3:
			printf(" three");
				break;
		case 4:
			printf(" four");
				break;
		case 5:
			printf(" five");
				break;
		case 6:
			printf(" six");
				break;
		case 7:
			printf(" seven");
				break;
		case 8:
			printf(" eight");
				break;
		case 9:
			printf(" nine");
				break;
		

		}
		num = num / 10;
	}
	_getch();
	return 0;
}
converting digit into number.c
Displaying converting digit into number.c.
