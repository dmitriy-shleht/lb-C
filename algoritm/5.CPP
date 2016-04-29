#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Даны два действительных числа х и у.
Вычислить их сумму разность произведение и частное*/
void main()
{
	clrscr();

	float x, y;

	printf("введите действительный числа а и в ");
	scanf("%f%f", &x, &y);

	printf("\nСумма = %.2f \nРазность = %.2f \nПроизведениие = %.2f \nЧастное = %.2f", x+y, x-y, x*y, x/y);

	getch();
}