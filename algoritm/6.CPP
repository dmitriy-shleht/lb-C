#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Дана длина ребра куба. Найти площ грани, площадь полной поверхности
и объем этого куба*/
void main()
{
	clrscr();

      float l, sg = 0, s = 0, v = 0;
	printf("Введите длину ребра куба ");
      scanf("%f", &l);

	sg = l * l;
	s = 6 * l * l;
	v = pow(l, 3);

	printf("\nПлощадь грани = %.2f\nПлощадь поверхности = %.2f\nОбъем = %.2f",sg,s,v);


	getch();
}