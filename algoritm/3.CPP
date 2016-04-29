#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Вычислить длину окружности и площадь круга
одного и того же заданного радиуса R*/
void main()
{
	clrscr();
	float r;

	printf("введите радиус окружности ");
	scanf("%f", &r);

	printf("\nДлина окружнасти = %.2f", 2*M_PI*r);
	printf("\nПлощадь круга = %.2f", M_PI * (r*r) );

	getch();
}