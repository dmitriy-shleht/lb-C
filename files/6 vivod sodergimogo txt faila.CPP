#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

/*6. Напишите программу, которая выводит на экран содержимое текстового файла*/
void main()
{
	clrscr();
	char c[100];
	FILE  *f;

	f = fopen("1.txt", "r");

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