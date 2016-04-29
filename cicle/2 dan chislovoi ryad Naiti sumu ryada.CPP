#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Дан числовой ряд и малая велечина е.Найти сумму
ряда с точностью е, общий член которого задан формулой
an = 1/2^n + 1/3^n*/
void main()
{
	clrscr();
	int e i;
	float s = 0;

	printf("Введите малую велечину e > 0 ");
	scanf("%i", &e);

	if (e < 0)
		printf("\nОшибка ввода");
	else if (e => 0.5)
		printf("\nСумма ряда = %f", e);
	else
	{
		for (i = 0; i; ++i)
		{
			
		}
	}


	getch();
}