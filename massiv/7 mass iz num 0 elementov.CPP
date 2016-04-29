#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 10

/*7 В целочисленной последовательности есть нулевые элементы.
Создать массив из номеров этих элементов.*/
 void main()
 {
	randomize();
	clrscr();

	int a[n], b[n], i, k = 0, isComp;

	printf("\t--исходный массив--\n");
	for(i = 0; i < n; i++)
	{
		a[i] = random(5);
		printf("%2i ", a[i]);
	}

	for (i = 0; i < n; i++)
	{
		if (a[i] == 0)
			b[k++] = i+1;
	}

	printf("\n\n\t--массив из номеров нулевых элементов--\n");
	for (i = 0; i < k; i++)
	{
		printf("%2i ", b[i]);
	}

   	getch();
 }