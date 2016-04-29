#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 5

/*2 Задана квадратная матрица. Переставить строку с
максимальным элементом на главной диагонали со строкой
с заданным номером m.*/
 void main()
{
	clrscr();
	randomize();

	int matr[n][n];

	int i, j, m, max, maxI, temp;

	printf("\n--Исходная матрица--");
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)
		{
			matr[i][j] = random(10);
			printf("%3i", matr[i][j]);
		}
	}

	printf("\n\nВведите № строки которую нужно переставить ");
	scanf("%i", &m);

	if (--m > n)
	{
		printf("\nТакой строки не существует!");
		getch(); return;
	}

	//поиск макс. эл. гл.диагонали
	max = matr[0][0];
	for (i = 0; i < n; ++i)
	{
		if (max < matr[i][i])
		{
			max = matr[i][i];
			maxI = i;
		}
	}

	//Меняем местами строки
	for (i = 0; i < n; ++i)
	{
		temp = matr[maxI][i];
		matr[maxI][i] = matr[m][i];
		matr[m][i] = temp;
	}

	printf("\n\n--Измененная матрица--");
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)
		{
			printf("%3i", matr[i][j]);
		}
	}

	getch();
}