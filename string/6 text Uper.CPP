#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
//#include <locale.h>

/*6 Написать программу, которая во введенной
с клавиатуры строке преобразует строчные буквы
русского алфавита в прописные.*/
 void main()
 {
	clrscr();
	//setlocale(LC_CTYPE,"Russian");

	char *s, *sUp;

	printf("Введите строку\n");

	gets(s);
	strupr(s);
	printf("\n%s", s);

	getch();
 }