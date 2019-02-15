//two numbers from user and an operator using switch command
#include<stdio.h>
#include<conio.h>
#include<process.h>

int main()


{
	int num1, num2, result, choice;
	printf("Enter the two Numbers:: \n ");
	scanf("%d%d", &num1, &num2);
	
	printf("\n 1.ADD \n 2.SUBSTRATION \n 3.MULTIPLICATION \n 4.DIVISION \n 5.MOD \n 6.EXIT");
	printf("\n Enter the choice::");
	scanf("%d", &choice);
	switch (choice)
	{

	case 1:
		result = num1 + num2;
		printf("the addition of your Numbers are is %d", result);
		break;
	case 2:
		result = num1 - num2;
		printf("the Substration of your Numbers are is %d", result);
		break;
	case 3:
		result = num1 * num2;
		printf("the Multiplication of your Numbers are is %d", result);
		break;
	case 4:
		result = num1 / num2;
		printf("the division of your Numbers are is %d", result);
		break;
	case 5:
		result = num1 % num2;
		printf("the Mod of your Numbers are is %d", result);
		break;
	case 6:
		exit(0);
	default:
		printf("\n INvalid choice");
		break;
	}
	
	
	_getch();
	return 0;
}
