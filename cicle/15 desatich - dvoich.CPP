#include <conio.h>
#include <stdio.h>


/*15 Составить программу перевода данного натурального
числа из десятичной системы счисления в двоичную.*/
void DecToBin(unsigned long int dec)
{
	int bin;

	bin = dec % 2;
	dec = dec / 2;
	if (dec != 0)
		DecToBin(dec);

	printf("%i", bin);
}

void main()
{
	clrscr();

	unsigned long int n, a, b, c;

	printf("введите натуральное число ");
	scanf("%lu", &a);

	if (a < 1)
	{
		printf("\nОшибка ввода!");
		getch();
		return;
	}

	printf("\nДесятичное число %lu \nВ двоичном виде ", a);
	DecToBin(a);

	getch();
}