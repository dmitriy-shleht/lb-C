#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 10

/*6 Дан массив натуральных чисел. Найти сумму элементов, кратных данному K*/
 void main()
 {
	randomize();
	clrscr();

	int a[n], i, k, s=0;

	printf("\t--исходный массив--\n");
	for(i = 0; i < n; i++)
	{
		a[i] = random(9);
		printf("%2i ", a[i]);
	}

	printf("\nвведите K ");
	scanf("%i", &k);

	for (i = 0; i < n; i++)
	{
		if(a[i] % k == 0)
			s+=a[i];
	}

	printf("\n\nсумма элементов кратных %i = %i", k, s);

   	getch();
 }