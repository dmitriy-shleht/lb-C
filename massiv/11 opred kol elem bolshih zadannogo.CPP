#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 5

/*11. Дана матрица A размера n x m. Определить количество элементов
массива больших заданного элемента массива.*/
 void main()
 {
	randomize();
	clrscr();

	int a[n][n], i, j;
	int x, y, count = 0;

	printf("\t--матрица--");
	for(i = 0; i < n; i++)
	{
		printf("\n");
		for(j = 0; j < n; j++)
		{
			a[i][j] = random(9);
			printf("%2i ", a[i][j]);
		}
	}

	printf("\nзадайте элемент матрицы (строка cтолбец) ");
	scanf("%i %i", &x, &y);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] > a[x-1][y-1])
				count++;
		}
	}

	printf("\n\nколичество элементов массива больших заданного элемента = %i", count);

   	getch();
 }