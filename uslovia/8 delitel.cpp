#include <conio.h>
#include <stdio.h>

//8 Определить, делителем каких чисел а, b, c является число k.
void main()
{
	int a, b, c, k;

	printf("Введите три числа (а, в, с,) \n");
	scanf("%i%i%i", &a, &b, &c);

	printf("Введите делитель k \n");
	scanf("%i", &k);

	if (a % k == 0)
		printf("\nЧисло %i является делителем числа %i", k, a);
	if (b % k == 0)
		printf("\nЧисло %i является делителем числа %i", k, b);
	if (c % k == 0)
		printf("\nЧисло %i является делителем числа %i", k, c);

	getch();
}