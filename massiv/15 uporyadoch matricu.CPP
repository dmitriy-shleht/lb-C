#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 5

/*15 Упорядочить по возрастанию элементы каждой строки матрицы размером n x m.*/
 void main()
 {
	randomize();
	clrscr();

	int a[n][n];
	int i, j, k, temp;

	printf("\n\t--исходная матрица--");
	for(i = 0; i < n; i++)
	{
		printf("\n");
		for(j = 0; j < n; j++)
		{
			a[i][j] = random(10);
			printf("%2i ", a[i][j]);
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			for (k = 0; k < n - j - 1; k++)
			{			
				if (a[i][k] > a[i][k + 1])
				{
					temp = a[i][k + 1];
					a[i][k + 1] = a[i][k];
					a[i][k] = temp;
				}
			}
		}
	}

	printf("\n\t--упорядоченная по возрастанию матрица--");
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for(j = 0; j < n; j++)
		{
			printf("%2i ", a[i][j]);
		}
	}

    getch();
 }