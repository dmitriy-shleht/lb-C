#include <conio.h>
#include <stdio.h>
#include <math.h>   
#include <locale.h>

/*Составить программу вычисления функции F(x) на отрезке
[a; b] c шагом h. Результат представить в виде таблицы,
первый столбец значение аргумента, второй значение функции
F(x) = sin2 x - cos2 x*/
void main()
{
	clrscr();

	int h, a, b, x;
	float f = 0;

	printf("введите отрезок [a; b] ");
	scanf("%i %i", &a, &b);

	printf("\nвведите шаг ");
	scanf("%i", &h);

	printf("\nx\tF(x) = sin 2x - cos 2x");
	printf("\n------------------------------");

	x = a;
	while (x <= b)
	{
		printf("\n%i \t%.2f", x, sin(2*x) - cos(2*x));
		x += h;
	}

	getch();
}