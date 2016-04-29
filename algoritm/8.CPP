#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


/*Известна длина окружности.
Найти площадь круга ограниченого этой окружностью*/
void main()
{
	clrscr();
	float l, r, s = 0;

	printf("введите длину окружности ");
	scanf("%f", &l);

	r = l / (2 * M_PI);
	s = M_PI * r * r;

	printf("\nПлощадь = %.2f", s);


	getch();
}