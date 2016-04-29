#include <conio.h>
#include <stdio.h>
#include <math.h>   
#include <locale.h>

/*9 Дано  натуральное число.Переставить  его  цифры  так, 
чтобы  образовалось  максимальное  число,  записанное  теми же 
цифрами.*/
void main()
{
	clrscr();

	int i;
	unsigned long int n, n2, nOut = 0;

	printf("введите натуральное число ");
	scanf("%lu", &n);

	if (n < 1)
	{
		printf("\nОшибка ввода!");
		getch();
		return;
	}

	for (i = 9; i >= 0; i--)
	{
		n2 = n;

		while (n2 > 0)
		{
			int max = n2 % 10;

			if (max == i)
				nOut = nOut * 10 + max;

			n2 /= 10;
		}
	}

	printf("\nМаксимально число %lu", nOut);
	getch();
}