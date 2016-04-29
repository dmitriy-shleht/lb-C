#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>

/*5. Разработать программу удаления в тексте,
содержащемся в файле, всех пробелов.*/
void main()
{
	clrscr();

    FILE *fin = fopen("1.txt", "r");
    FILE *fout = fopen("1_formatted.txt", "w");

    if(!fin || !fout)
    {
        printf("\n\nошибка открытия файлов!");
        return;
    }

    for(char ch = fgetc(fin); !feof(fin); ch = fgetc(fin))
    {
	  if(ch != ' ')
		fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("\nПробелы удалены");

    getch();
}