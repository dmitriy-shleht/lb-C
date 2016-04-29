#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Даны три точки А(x1,y1), B(x2,y2), C(x3,y3). Определить, будут ли они
расположены на одной прямойё Если нет то вычислить угол АБС*/
void main()
{
	clrscr();

	int x1,y1, x2,y2, x3,y3;
	float sc, ab, bc, u=0;

	printf("введите точку А(x1,y1) ");
	scanf("%i %i", &x1, &y1);

	printf("\nвведите точку B(x2,y2) ");
	scanf("%i %i", &x2, &y2);

	printf("\nвведите точку C(x3,y3) ");
	scanf("%i %i", &x3, &y3);


	if((x3 - x1) / (x2 - x1) == (y3 - y1) / (y2 - y1))
		printf("\nТочки лежат на одной прямой");
	else
	{
		sc = (x2-x1)*(y3-y2)+(x3-x2)*(y2-y1);
		ab = sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
		bc = sqrt(pow(x2-x3, 2)+pow(y2-y3, 2));
		u = acos(sc / ab / bc) * 180 / M_PI;

		printf("\nУгол АБС = %f", u);
	}

	getch();
}