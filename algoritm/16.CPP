#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Найти сумму членов арифметической прогрессии, если известны ее первый
член, знаменатель и число членов прогрессии.*/
void main()
{
	clrscr();

	long int a, an, d, n, s=0;

	printf("Введите первый член прогрессии ");
	scanf("%li", &a);

	printf("\nВведите разность ");
	scanf("%li", &d);

	printf("\nВведите число членов прогрессии ");
	scanf("%li", &n);

	an = a + d*(n - 1);
	s = ((a + an) * n) / 2;

	printf("\n\nСумма членов арифметической прогрессии = %li", s);

	getch();
}