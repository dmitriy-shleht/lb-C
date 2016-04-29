#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Вычислить корни квадратного уравнения ax^2 + bx + c = 0
зажанного коэфициентами a, b, c (a <> 0 и дискриминант => 0)*/
void main()
{
	clrscr();

	float a, b, c, d, x1, x2;

	printf("введите коэфициенты a b c: ");
	scanf("%f %f %f", &a, &b, &c);

	d = (b * b) - (4 * a * c);

	if(a == 0)
	{
		printf("\nа недолжно равняться 0");
		getch(); return;
	}

	if(d < 0)
	{
		printf("\nДискриминант отрицательный ");
		getch(); return;
	}

	x1 = (-b - sqrt(d)) / (2 * a);
	x2 = (-b + sqrt(d)) / (2 * a);

	printf("\nКорни уравнения (%.2f;%.2f)", x1, x2);


	getch();
}