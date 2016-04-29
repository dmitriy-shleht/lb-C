#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 5

/*4 Дана целая квадратная матрица п-го порядка. Определить,
является ли она магическим квадратом, т.е. такой, в которой 
суммы элементов во всех строках и столбцах одинаковы*/
 void main()
{
	clrscr();
	randomize();

	int matr[n][n];

	int i, j, sumStr, sumStr2, sumCol, sumCol2, magic = 0;

	printf("\n--Исходная матрица--");
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)
		{
			matr[i][j] = random(2);
			printf("%3i", matr[i][j]);
		}
	}


	for (i = 0; i < n; i++)
	{
		sumStr2=sumStr;
		sumCol2=sumCol;
		sumStr=0;
		sumCol=0;
		for (j = 0; j < n; j++)
		{
			sumStr += matr[i][j];
			sumCol += matr[j][i];
		}

		if (i != 0 && (sumStr2 != sumStr || sumCol2 != sumCol))
			magic = -1;

		printf("\nСумма эл. в строке %i = %i | Сумма эл. в колонке %i = %i",
			i+1, sumStr, i+1, sumCol);
	}

	if (magic != 0)
		printf("\n\nМатрица не является магическим квадратом");
	else
		printf("\n\nМатрица является магическим квадратом");
	getch();
}