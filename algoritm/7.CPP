#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*дана сторона равностор треугольника.
найти площадь, его выстоты, радиусы впис и опис окружности*/
void main()
{
	clrscr();
	float l, s=0, h=0, rv=0, ro=0;

	printf("введите сторону треугольника ");
	scanf("%f",&l);

	s = (sqrt(3) / 4) * (l * l);
	h = (sqrt(3) / 2) * l;
	rv = l / (2 * sqrt(3));
	ro = l / sqrt(3);

	printf("S = %.2f\nH = %.2f\nRv = %.2f\nRo = %.2f", s,h,rv,ro);
	getch();
}