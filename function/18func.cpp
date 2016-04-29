#include<conio.h>
#include<stdio.h>
#include<math.h>

float CircleS(float r)
{
	return M_PI*pow(r,2);
}


void main()
{
	float r1, r2, r3;
	clrscr();

	printf("введите радиусы трех кругов\n");
	scanf("%f%f%f", &r1, &r2, &r3);

	printf("Площадь круга с радиусом %.2f = %.2f\n",r1, CircleS(r1));
	printf("Площадь круга с радиусом %.2f = %.2f\n",r2, CircleS(r2));
	printf("Площадь круга с радиусом %.2f = %.2f\n",r3, CircleS(r3));


	getch();
}
