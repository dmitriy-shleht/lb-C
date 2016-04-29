#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Найти площадь кольца, внутренний радиус которого равен r,
а внешний заданному числу R*/
void main()
{
	clrscr();
	float r, R, s;

	printf("введите внутренний радиус r ");
	scanf("%f", &r);

	printf("\nвведите внешний радиус R ");
	scanf("%f", &R);

	s = M_PI * (R*R - r*r);

	printf("\nплощадь кольца S = %.2f", s);


	getch();
}