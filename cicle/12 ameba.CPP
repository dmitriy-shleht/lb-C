#include <conio.h>
#include <stdio.h>
#include <math.h>   

/*12 Одноклеточная амеба каждые три 3 часа делится на 2 
клетки. Определить, сколько амеб будет через 3, 6, 9, 12,
...24 часа*/
void main()
{
	clrscr();

	int i, kletkaCount = 2;
	float s;

	for (i = 3; i <= 24; i+=3)
	{
		printf("\nЧерез %iч. будет %i кл.", i, kletkaCount);
		kletkaCount *= 2;
	}

	getch();
}