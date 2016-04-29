#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 10

/*9. Дана последовательность чисел a1, a2, ..., an.
Заменить все ее члены, большие данного Z, этим числом.
Подсчитать количество замен*/
 void main()
 {
	randomize();
	clrscr();

	int a[n], i, z, count = 0;

	printf("\t--исходный массив--\n");
	for(i = 0; i < n; i++)
	{
		a[i] = random(5);
		printf("%2i ", a[i]);
	}

	printf("\nведите число Z ");
	scanf("%i", &z);
	for (i = 0; i < n; i++)
	{
		if (a[i] > z)
		{
			a[i] = z;
			count++;
		}
	}

	if (count > 0)
	{
		printf("\n\n\t--измененный массив--\n");
		for (i = 0; i < n; i++)
		{
			printf("%2i ", a[i]);
		}
		printf("\nкол-во замен = %i", count);
	}
	else
		printf("\nчленов больше Z нет!");

   	getch();
 }