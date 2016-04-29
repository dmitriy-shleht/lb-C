#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

/*Программа которая позволяет просматривать файлы*/
void main()
{
	clrscr();
	char c[100];
	FILE  *f;

	f = fopen("1_009.cpp", "r");

	if(f == NULL)
		printf("ошибка открытия файла");
	else
	{
		while(fgets(c, 100, f) != 0)
		{
		  puts(c);
		}
	}
	fclose(f);

	getch();
}