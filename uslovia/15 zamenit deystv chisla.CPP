#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Даны действительный числа a,b,c. Удвоить эти числа, если a<b<c,
и заменить их абсолютными значениями если это не так*/
void main()
{
	clrscr();
	float a, b, c;

	printf("введите числа a b c ");
	scanf("%f %f %f", &a, &b, &c);

	if(a<b && b<c)
		printf("\nУдвоенные числа %.2f\t%.2f\t%.2f", a*=2, b*=2, c*=2);
	else
		printf("\nМодуль чисел %.2f %.2f %.2f", fabs(a), fabs(b), fabs(c));


	getch();
}