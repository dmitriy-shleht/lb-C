#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Треугольник задан велечинами своих углов и радиусом описё окружности
Найти стороны треугольника*/
void main()
{
	clrscr();
	float a, b, c, r, a1, b1, c1;

	printf("введите углы треугольника  А В С ");
	scanf("%f%f%f", &a, &b, &c);

	printf("\nвведите ражиус описанной окружности ");
	scanf("%f", &r);

	a1 = 2 * r * sin(a * M_PI / 180);
	b1 = 2 * r * sin(b * M_PI / 180);
	c1 = 2 * r * sin(c * M_PI / 180);

      printf("\nсторона А=%.2f\nсторона B=%.2f\nсторона С=%.2f", a1, b1, c1);


	getch();
}