#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>

/*10. Напишите программу, которая дописывает в находящийся на диске файл имя,
фамилию и номер телефона, например, вашего товарища. Если файла на диске нет,
то программа должна создать его. В файле все записи должны находиться
последовательно в одной строке. */
void main()
{
	clrscr();
	char *fio, *tel;
	char c;

	FILE *spr;

	printf("Введите ФИО: ");
	gets(fio);

	printf("\nВведите номер телефона: ");
	gets(tel);


	spr = fopen("spr.txt", "a+");

	if(spr == NULL)
		printf("\n\nошибка открытия файла!");
	else
	{
		fprintf(spr, "\nFIO: %s ---> Tel: %s", fio, tel);
		fprintf(spr, "\n------------------------------------------");
	}

	fclose(spr);

	printf("\n\nСправочник обновлен!");

	getch();
}