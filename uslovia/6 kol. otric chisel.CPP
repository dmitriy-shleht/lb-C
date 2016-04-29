#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Посчитать кол-во отрицательных чисел среди чисел а, в, с*/
void main()
{
	clrscr();
	float a, b, c;
	int k = 0;

	printf("введите три числа ");
	scanf("%f %f %f", &a, &b, &c);

	if(a < 0)
		k++;

	if(b < 0)
		k++;

	if(c < 0)
		k++;

	printf("кол-во отрицательных чисел = %i", k);
	getch();
}