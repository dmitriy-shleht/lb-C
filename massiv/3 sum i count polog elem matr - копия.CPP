#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 5

/*3 Вычислить сумму и число положительных элементов 
матрицы A[N, N], находящихся над главной диагональю.*/
 void main()
{
	clrscr();
	randomize();

	int matr[n][n];

	int i, j, jd = 1, sum, count;

	printf("\n--Исходная матрица--");
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)
		{
			matr[i][j] = random(10)-2;
			printf("%3i", matr[i][j]);
		}
	}


	printf("\n\nСтрока\tСумма\tКол-во элем");
	for (i = 0; i < n; i++)
	{
		sum = 0, count = 0;
		for (j = jd; j < n; j++)
		{
			if (matr[i][j] >= 0)
			{
				sum += matr[i][j];
				count++;
			}
		}
		jd++;
		printf("\n%i \t%i \t%i", i+1, sum, count);
	}

	getch();
}