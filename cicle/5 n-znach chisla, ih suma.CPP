#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Среди всех n-значных чисел указать те, сумма
цифр которых = данному числу к*/
void main()
{
	clrscr();

	int n;
	unsigned long int i, k, n1, n2, s;

	printf("Введите кол-во цифр в числе ");
	scanf("%i", &n);

	printf("Введите число k ");
	scanf("%lu", &k);

	if (n < 1)
	{
		printf("\nОшибка ввода!");
		getch();
		return;
	}
	else {
		n1 = pow(10, n-1);
		n2 = pow(10, n) - 1;

		while (n1 <= n2)
		{
			i = n1;
			s = 0;
			while (i != 0)
			{
				s += i % 10;
				i /= 10;
			}

			if (k == s)
				printf("\nчисло: %lu сумма чисел = %lu", n1, s);

			n1++;
		}
	}

	getch();
}