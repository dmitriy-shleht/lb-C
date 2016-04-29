#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 5

/*1 Составить программу, которая заполняет квадратную 
матрицу порядка n натуральными числами 1, 2, 3,..., n2 , 
записывая их "по спирали"*/
 void main()
{
	clrscr();

	int matr[n][n];

	int i = 1, j, k, p = n / 2;
	for (k = 1; k <= p; k++) //Цикл по номеру витка
	{
		for (j = k - 1; j < n - k + 1; j++)
			matr[k - 1][j] = i++;

		for (j = k; j < n - k + 1; j++)
			matr[j][n - k] = i++;

		for (j = n - k - 1; j >= k - 1; --j)
			matr[n - k][j] = i++;

		for (j = n - k - 1; j >= k; j--)
			matr[j][k - 1] = i++;
	}
	if (n % 2 == 1)
		matr[p][p] = n*n;

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