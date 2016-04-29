#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <dos.h>

/*3 Напишите программу, которая выводит на экран
сообщение в "телеграфном" стиле: буквы сообщения
должны появляться по одной, с некоторой задержкой*/
 void main()
 {
	clrscr();

	char *s = "Эта программа выводит этот текст в телеграфном стиле";

	for (int i = 0; s[i] != 0x0; i++)
	{
		printf("%c", s[i]);
		delay(200);
	}

	getch();
 }