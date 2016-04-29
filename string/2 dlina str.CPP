#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*2 Напишите программу, которая вычисляет длину
введенной с клавиатуры строки*/
 void main()
 {
	clrscr();

	char *s;

	printf("Введите строку\n");

	gets(s);
	
	printf("Длина вашей строки = %d", strlen(s));

	getch();
 }