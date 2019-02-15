//here is the program for calculating price of item when discount is given 
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()

{
	int d, sp,dp, fp;
	printf("enter your price on item \n " );
	scanf("%d", &sp);
	printf("enter your discount on item \n ");
	scanf("%d", &d);

	if (d <= 100) {
		
			dp = (sp*d) / 100;
			fp = sp - dp;
			printf("price after discount is-%d  \n ", fp);
	}
	else {
		printf("invalid input\n ");
	}
	_getch();
}
