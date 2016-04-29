#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Найти площадь треугольника, две стороны которого равны а и b,
а угол между этими сторонами q*/
void main()
{
	clrscr();

	float a, b, q, s=0;

	printf("введите две стороны треугольника ");
	scanf("%f %f", &a, &b);

	printf("\nвведите угол между ними ");
	scanf("%f", &q);

	s = (a * b / 2) * sin(q * M_PI / 180);
	printf("\nS = %.2f", s);

	getch();
}