#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*16 Найти сумму всех п-значных чисел */
void main()
{
	clrscr();

	int n;
	unsigned long int i, k, n1, n2, s;

	printf("Введите кол-во цифр в числе (от 1 до 4) ");
	scanf("%i", &n);

	if (n < 1 || n > 4)
	{
		printf("\nОшибка ввода!");
		getch();
		return;
	}
	else {
		n1 = pow(10, n-1);
		n2 = pow(10, n)-1;

		while (n1 <= n2)
		{
			i = n1;
			s = 0;
			while (i != 0)
			{
				s += i % 10;
				i /= 10;
			}

			printf("\nчисло: %lu сумма чисел = %lu", n1++, s);
		}
	}

	getch();
}