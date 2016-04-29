#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*дано действительное число х. Не пользуясь никакими другими
арифм.операциями кроме умножения сложения и вычитания
вычислить за минимальное число операций 2х^4-3x^3+4x^2-5x+6*/
void main()
{
	clrscr();

	float x;
	printf("введите число ");
	scanf("%f", &x);

	printf("\n%.2f", (((2*x-3)*x+4)*x-5)*x+6);


	getch();
}