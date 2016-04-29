#include <conio.h>
#include <stdio.h>
#include <math.h>   


/*Вычислить растояние между двумя точками
с данными координатами х1.у1 и х2.у2 */
void main()
{
	clrscr();
	float x1,y1,x2,y2;

	printf("\nвведите координаты точки А ");
	scanf("%f%f", &x1, &y1);

	printf("\nвведите координаты точки B ");
	scanf("%f%f", &x2, &y2);

	printf("\nРастояние между точками А и В = %.2f", sqrt(pow(x2-x1, 2) + pow(y2-y1, 2)));

	getch();
}