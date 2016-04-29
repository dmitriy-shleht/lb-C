#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*3 Напишите программу, которая выводит
код введенного пользователем символа. 
Программа должна завершать работу в 
результате ввода, например, точки*/
 void main()
 {
	clrscr();

	char s;

	while(1)
	{
		printf("Введите символ: ");

		s = getch();
		
		printf("символ \"%c\" - код %i \n\n", s, s);

		if(s == 46) break;
	}
 }