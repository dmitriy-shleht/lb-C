#include <conio.h>
#include <stdio.h>

/*8 вариант, таблица милли в км и обратно */
void main()
{
	clrscr();

	float km = 1.609344, n = 1, k, i;

	printf("введите растояние в км. k\n");
	scanf("%f", &k);

	for (i = 1; i <= ceil(k); i++)
	{
		if (i / km <n)
			printf("мл - %.4f\tкм - %.4f\n", i / km, i);
		else
		{
			if (n * km <= k)
				printf("мл - %.4f\tкм - %.4f\n", n, n * km);
			if (i <= k)
				printf("мл - %.4f\tкм - %.4f\n", i / km, i);

			n++;
		}
	}
	getch();
}