//here is the program for finding area of circle
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float r,a;
	printf("Enter the radius of your circle- \n ");
	scanf("%f", &r);
	a = 3.14*r*r;
	printf("area of your circle is--%f", a);
	
	_getch();
}
