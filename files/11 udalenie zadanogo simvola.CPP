#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>

/*11. Выбросить из текста, находящегося в файле, заданный знак,
где бы он невстречался.*/
void main()
{
	clrscr();

    char *simbol;
    int f = 0;

    printf("Введите удаляемый символ: ");
    gets(simbol);

    FILE *fin = fopen("1.txt", "r");
    FILE *fout = fopen("1_edit.txt", "w");

    if(!fin || !fout)
    {
        printf("\n\nошибка открытия файлов!");
        return;
    }

    for(char ch = fgetc(fin); !feof(fin); ch = fgetc(fin))
    {
        if(ch == simbol[0] && f == 0)
        {
            f = 1;
		continue;
        }
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("\nСимвол удален");

    getch();
}