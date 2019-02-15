//Finding F from C (temp).
// here is the program of conversion of temperature f from c
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main1()
{
	float c, f;
	printf("What is todays temperature in Degree C- \n ");
	scanf("%f", &c);
	f = (c * 9/5)+32;
	printf("Todays Temperature in Fahrenheit--%f", f);
	_getch();
}
