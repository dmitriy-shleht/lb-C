#include<conio.h>
#include<stdio.h>

void AddRightDigit(int d, long int &k)
{
	k = k * 10 + d;
}


void main()
{
	long int k;
	int d;
	clrscr();

	printf("введите число к\n");
	scanf("%li", &k);

	printf("введите число d для добавления его к числу к\n");
	scanf("%i", &d);

	if(d < 0 || d > 9)
		printf("ошибка ввода Значение параметра d должно быть в пределах 0-9\n");
	else
	{
		AddRightDigit(d, k);

		printf("результат %li\n", k);

		AddRightDigit(d, k);

		printf("результат %li\n", k);
	}


	getch();

}
