#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Найти площадь равнобедренной трапеции с основаниями а и b
и углом a при большем основании а*/
void main()
{
	clrscr();
	float a, b, u, h, s;

	printf("введите основания трапеции a b ");

	scanf("%f %f", &a, &b);

	printf("введите угол а ");

	scanf("%f", &u);

	if(b==0 || a<=b || u==0 || u=>90)
	{
		printf("\nВходные данные неверны");
		getch(); return;
	}

	u = u * M_PI / 180;
	h = (a - b) * sin(u) / (2 * cos(u));
	s = (a + b) * h / 2;

	printf("\nПлощадь трапеции = %.2f", s);

	getch();
}