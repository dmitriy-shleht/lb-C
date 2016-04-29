#include <conio.h>
#include <stdio.h>
#include <math.h>   


/*Определить равен ли квадрат заданного трехзначного числа кубу суммы цифр
этого числа*/
void main()
{
	clrscr();
	int x, x2, xs;

	printf("\nвведите трехзначное число ");
	scanf("%i", &x);

	if(x > 999 || x < 100)
	{
		printf("\nчисло не трехзначное");
		getch(); return;
	}

	x2 = x*x;
	xs = pow((x/100) + (x/10%10) + (x%10), 3);

	if(x2 == xs)
		printf("\nквадрат числа %i = кубу суммы цифр этого числа", x);
	else
		printf("\nквадрат числа %i != кубу суммы цифр этого числа", x);


	getch();
}