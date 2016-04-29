#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Дано а. Не используя никаких функций и никаких операций, кроме
умножения получить а^8 за три операции. a^10 и a^16 за четыре операции*/
void main()
{
	clrscr();
	long int a, a2, a4, a8, a10, a16;

	printf("введите а ");
	scanf("%li", &a);

	a2 = a * a;
	a4 = a2 * a2;
	a8 = a4 * a4;
	a10 = a8 * a2;
	a16 = a8 * a8;

	printf("\na^8 = %li\na^10 = %li\na^16 = %li", a8, a10, a16);

	getch();
}