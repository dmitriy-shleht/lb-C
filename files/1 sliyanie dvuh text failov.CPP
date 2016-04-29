#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>

/*1. Произвести слияние двух текстовых файлов. 
Имена файлов вводятся с клавиатуры*/
void main()
{
	clrscr();
	char *fName1, *fName2;
	char c;
	FILE *f1;
	FILE *f2;
	FILE *mergeFiles;

	printf("Введите полное имя первого файла: ");
	gets(fName1);

	printf("\n\nВведите полное имя второго файла: ");
	gets(fName2);

	f1 = fopen(fName1, "r");
	f2 = fopen(fName2, "r");
	mergeFiles = fopen("3.txt", "w+");

	if(f1 == NULL || f2 == NULL || mergeFiles == NULL)
		printf("\n\nошибка открытия файлов!");
	else
	{
		while((c=fgetc(f1)) && (c!=EOF))
			fputc(c, mergeFiles);
		fputc('\n', mergeFiles);

		while((c=fgetc(f2)) && (c!=EOF))
			fputc(c, mergeFiles);
		fputc('\n', mergeFiles);
	}

	fclose(f1);
	fclose(f2);
	fclose(mergeFiles);

	printf("\n\nФайлы успешно объеденены");

	getch();
}