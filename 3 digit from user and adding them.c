//here is the program for accepting 3 digit from user and adding them
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float a,b,c,d;
	printf("Enter your first number- \n ");
	scanf("%f", &a);
	printf("Enter your second number- \n ");
	scanf("%f", &b);
	printf("Enter your third number- \n ");
	scanf("%f", &c);
	d = a + b + c;
	printf("addtion of your number are--%f", d);

	_getch();
}
