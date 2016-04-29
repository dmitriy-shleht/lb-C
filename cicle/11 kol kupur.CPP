#include <conio.h>
#include <stdio.h>
#include <math.h>   

/*11 Покупатель должен заплатить в кассу S р. У него имеются
1, 2, 5, 10, 50, 100, 500 р. Сколько купюр разного достоинства 
отдаст покупатель, если он начинает платить с самых крупных?*/
void main()
{
	clrscr();

	int i;
	float s;

	printf("введите сумму ");
	scanf("%f", &s);

	int kup[] = { 500, 100, 50, 10, 5, 2, 1 };

	for (i = 0; i < 7; i++)
	{
		if (s > 0 && s <= kup[i])
			printf("\nКупюра %i - 1", kup[i]);
		else if (s > kup[i])
			printf("\nКупюра %i - 1", kup[i]);
		else
			printf("\nКупюра %i - 0", kup[i]);

		s = s - kup[i];
	}

	if (s > 0)
		printf("\nЕще не хватает %.2f р.", s);

	getch();
}