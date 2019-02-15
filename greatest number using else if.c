//two numbers from user and an operator using switch command
#include<stdio.h>
#include<conio.h>
#include<process.h>

int main()


{
	double num1, num2, num3;
	printf("Enter your 3 numbers and i will tell you which one is greatest \n ");
	scanf("%lf%lf%lf", &num1, &num2, &num3);
	if (num1 > num2 && num1 > num3)
	{
		printf("The Largest number is %lf:", num1);
	}

	else if (num2 > num1 && num2 > num3)
	{
		printf("The Largest number is %lf:", num2);
	}
	else

		printf("The Largest number is %lf:", num3);
	_getch();
	return 0;
}
