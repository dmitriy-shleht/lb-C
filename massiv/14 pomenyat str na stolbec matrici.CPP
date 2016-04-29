#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 5

/*14. Дана действительная квадратная матрица порядка n.
Преобразовать матрицу по правилу: строку с номером n
сделать столбцом с номером n.*/
 void main()
 {
	randomize();
	clrscr();

	float a[n][n];
	int i, j, numStr, numCol;

	printf("\t--матрица--");
	for(i = 0; i < n; i++)
	{
		printf("\n");
		for(j = 0; j < n; j++)
		{
			a[i][j] = ((float)random(50)) / 5;
			printf("%5.2f ", a[i][j]);
		}
	}

	printf("\nвведдите номер строки ");
	scanf("%i", &numStr);

	printf("\nвведдите номер столбца ");
	scanf("%i", &numCol);

	for (i = n-1; i >= 0; i--)
	{
		a[i][numCol-1] = a[numStr-1][i];
	}

	printf("\n\t--преобразованная матрица--");
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for(j = 0; j < n; j++)
		{
			printf("%5.2f ", a[i][j]);
		}
	}

     	getch();
 }