#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Дано натуральное число n. Найти сумму первой и
последней цифры этого числа*/
void main()
{
	clrscr();

	int nl, n;

	printf("Введите натуральное число n ");
	scanf("%i", &n);

	if (n < 1)
	{
		printf("\nОшибка ввода!");
		getch();
		return;
	}
	else if (n < 10)
		printf("\nS = %i", n);
	else {
		nl = n;
		while (nl / 10 != 0)
			nl /= 10;

		printf("\nS = %i", (n%10) + nl);
	}

	getch();
}