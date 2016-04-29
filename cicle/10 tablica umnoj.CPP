#include <conio.h>
#include <stdio.h>

/*Составить программу которая печатает таблицу умножения*/
void main()
{
	clrscr();

	const int n = 10;
	int i, i2;

	for (i = 1; i <= n; i++)
	{
		for (i2 = 1; i2 <= n; i2++)
		{
			if (i == 1 && i2 == 1)
				printf(" \t");
			else
				printf("%i\t", i * i2);
		}

		printf("\n");
	}

	getch();
}