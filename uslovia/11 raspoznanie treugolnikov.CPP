#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Написать программу, распознающую по длинам сторон среди всех треугольников
прямоугольные. Если таковых нет, то вычислить велечину угла с.*/
void main()
{
	clrscr();
	int a, b, c;
	float g=0;

	printf("введите сторону a ");
	scanf("%i", &a);

	printf("\nвведите сторону b ");
	scanf("%i", &b);

	printf("\nвведите сторону c ");
	scanf("%i", &c);



	if(a*a + b*b == c*c)
		printf("\nтреугольник прямоугольный");
	else
	{
		g = acos( (a*a+b*b-c*c) / (2*a*b) ) * 180 / M_PI;
		printf("\nтреугольник не прямоугольный");
		printf("\nвелечина угла с = %.2f", g);

	}


	getch();
}