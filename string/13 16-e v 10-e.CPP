#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*13 Написать программу, которая преобразует введенное
с клавиатуры двухразрядное шестнадцатеричное число в десятичное*/
 void main()
 {
	clrscr();

	char hex[16];
	long int dec = 0;
	int i, v = 1, err = 0;

	printf("введите шестнадцатеричное число:  ");
	gets(hex);
	strupr(hex);

	for ( i = strlen(hex) - 1; i >= 0; i--)
	{
		if (hex[i] >= '0' && hex[i] <= '9')
			dec += v * (hex[i] - 48);
		else if (hex[i] >= 'A' && hex[i] <= 'F')
			dec += v * (hex[i] - 55);
		else        
		{ 
			err = 1;
			break;
		}

		v *= 16;
	}

	if ( !err )	
		printf("\n16-e %s\n=\n10-e %u", hex, dec);
	else
		printf("Cтрока %s не является 16-m числом", hex);

	getch();
 }