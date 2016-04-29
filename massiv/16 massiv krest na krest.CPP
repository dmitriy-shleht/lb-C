#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 2

/*16 крест на крест*/
 void main()
 {
	randomize();
	clrscr();

	int a[2 * n][2 * n], i, j;
	int b[2 * n][2 * n];
	int x, y;

	printf("\t--исходный массив--");
	for(i = 0; i < 2 * n; i++)
	{
		printf("\n");
		for(j = 0; j < 2 * n; j++)
		{
			a[i][j] = random(9);
			printf("%7i ", a[i][j]);
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			b[i][j] = a[i + n][j + n];
			b[i + n][j + n] = a[i][j];

			b[i + n][j] = a[i][j + n];
			b[i][j + n] = a[i + n][j];
		}
	}

	printf("\n\n\t--массив крест накрест--");
	for (i = 0; i < 2 * n; i++)
	{
		printf("\n");
		for (j = 0; j < 2 * n; j++)
		{
			printf("%7i ", b[i][j]);
		}
	}

   	getch();
 }