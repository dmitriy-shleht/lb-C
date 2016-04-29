#include <conio.h>
#include <stdlib.h>
#include <stdio.h>  


/*Даны две точки А(x1;y1) и B(x2;y2) Составить алгоритм,
определяющий, которая из точек находится ближе к началу координат.*/
void main()
{
	clrscr();
	int x1, y1, x2, y2;

	printf("Введите координаты точки А ");
	scanf("%i %i", &x1, &y1);

	printf("\nВведите координаты точки B ");
	scanf("%i %i", &x2, &y2);

	if((x1*x1 + y1*y1) < (x2*x2 + y2*y2))
		printf("Точка А(%i;%i) ближе к началу координат", x1, y1);
	else
		printf("Точка B(%i;%i) ближе к началу координат", x2, y2);

	getch();
}