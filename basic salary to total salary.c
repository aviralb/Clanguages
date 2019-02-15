//here is the program for salary counting if da ta and hra is given
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()

{
	int da, ta, hra, basic, ts;
	printf("enter your basic salary \n ");
	scanf("%d", &basic);

	if (basic <= 5000)
	{
		da = (basic * 10) / 100;
		ta = (basic * 20) / 100;
		hra = (basic * 25) / 100;
		ts = basic + da + ta + hra;
		printf("your total salary is :%d", ts);
	}
	else
	{
		da = (basic * 15) / 100;
		ta = (basic * 25) / 100;
		hra = (basic * 30) / 100;
		ts = basic + da + ta + hra;
		printf("your total salary is :%d", ts);
	}
	_getch();
}
