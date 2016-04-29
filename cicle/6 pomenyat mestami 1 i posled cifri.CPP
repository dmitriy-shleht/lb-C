#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Дано натуральное число n. Переставить местами
первую и последнюю цифру этого числа*/
void main()
{
	clrscr();

	unsigned long nl, nl2, nf, nf2, n, n2, k = 0, i;

	printf("Введите натуральное число n ");
	scanf("%lu", &n);

	if (n < 1)
		printf("\nЧисло не натуральное!");
	else if (n < 10)
		printf("\nИсходное число %lu | Результат %lu", n, n);
	else if (n > 9)
	{
		nf = n;
		while (nf > 9)
		{
			nf /= 10;
			k++;
		}

		nf2 = nf;
		nl = n % 10;
		nl2 = n % 10;
		for (i = 1; i <= k; i++)
		{
			nl *= 10;
			nf *= 10;
		}

		n2 = nl + (n-nf) - nl2 + nf2;
		
		printf("\nИсходное число %lu | Результат %lu", n, n2);
	}

	getch();
}