#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*Для целого числа к от 1-99 напечатать фразу "мне к лет", учитывая при этом,
что при некоторых значениях к слово лет надо заменить на слово год или года.
Например 11 лет, 22 года, 21 год*/
void main()
{
	clrscr();

	int k;

	printf("Введите ваш возраст от 1 до 99 ");
	scanf("%i", &k);

	if(k < 1 || k > 99)
		printf("\nВы еще не родились или Вас уже нет в живых!");
	else if (k == 11 || k == 12 || k == 13)
		printf("\nМне %i лет", k);
	else
	{
	   switch(k%10) {
		case 1:
			printf("\nМне %i год", k);
			break;
		case 2: case 3: case 4:
			printf("\nМне %i года", k);
			break;
		default:
			printf("\nМне %i лет", k);
			break;
	   }
	}

	getch();
}