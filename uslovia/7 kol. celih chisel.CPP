#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Подсчитать кол-во целых чисел среди чисел а, в, с*/
void main()
{
	clrscr();
	float a, b, c;
	int k = 0;

	printf("введите три числа ");
	scanf("%f %f %f", &a, &b, &c);

	if(ceil(a) == a)
		k++;

	if(ceil(b) == b)
		k++;

	if(ceil(c) == c)
		k++;

	printf("кол-во целых чисел = %i", k);
	getch();
}