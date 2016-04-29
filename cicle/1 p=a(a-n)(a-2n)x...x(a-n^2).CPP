#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Даны действительное число а, натуральное число n. Вычислить
p=a(a-n)(a-2n)x...x(a-n^2)*/
void main()
{
	clrscr();

	float a, p = 0;
	int i, n;

	printf("Введите действительное число а ");
	scanf("%f", &a);

	printf("Введите натуральное число n ");
	scanf("%i", &n);

	if (n < 1)
	{
		printf("\nОшибка ввода!");
		getch();
		return;
	}

	p = a;
	for (i = 1; i <= n; i++)
		p *= (a - i * n);

	printf("\np=a(a-n)(a-2n)x...x(a-n^2) = %.2f", p);


	getch();
}