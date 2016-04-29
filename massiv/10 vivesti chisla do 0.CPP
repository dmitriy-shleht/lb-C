#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 10

/*10. Дана последовательность чисел, среди которых имеется один ноль.
Вывести на печать все числа, включительно донуля.*/
 void main()
 {
	randomize();
	clrscr();

	int a[n] = {1, 2, 3, 5, 0, 6, 7, 8, 9, 4};
	int i, j=0;

	printf("\t--исходный массив--\n");
	for(i = 0; i < n; i++)
	{
		//a[i] = random(5);
		printf("%2i ", a[i]);
	}

	printf("\n\n\t--массив включительно до 0--\n");
	while (a[j] != 0)
		printf("%2i ", a[j++]);

	printf("%2i ", a[j]);

   	getch();
 }