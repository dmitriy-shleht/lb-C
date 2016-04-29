#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*1 Написать программу, которая запрашивает имя пользователя
и здоровается с ним*/
 void main()
 {
	clrscr();

	char *s;

	printf("Как Вас зовут?  ");

	gets(s);
	
    printf("Здравствуйте %s", s);

	getch();
 }