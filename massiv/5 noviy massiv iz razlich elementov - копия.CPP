#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 10

/*5 Дан целочисленный массив A[n], среди элементов есть одинаковые.
Создать массив из различных элементовA[n ].*/
 void main()
 {
	randomize();
	clrscr();

	int a[n], b[n], i, j, k = 0, isComp;

	printf("\t--исходный массив--\n");
	for(i = 0; i < n; i++)
	{
		a[i] = random(9);
		printf("%2i ", a[i]);
	}

	for (i = 0; i < n; i++)
	{
		isComp = 1;
		for (j = 0; j < n; j++)
		{
			if(i != j && a[i] == a[j])
				isComp = 0;
		}

		if(isComp == 1)
			b[k++] = a[i];
	}

	printf("\n\n\t--массив из различных элементов--\n");
	for (i = 0; i < k; i++)
	{
		printf("%2i ", b[i]);
	}

   	getch();
 }