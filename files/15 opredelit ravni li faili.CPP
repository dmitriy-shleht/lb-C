#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>

/*15 Определить равны ли два заданных файла*/
void main()
{
	clrscr();

    char buf1[512], buf2[512];
    FILE *f1 = fopen("1.txt","r");
    FILE *f2 = fopen("2.txt","r");

    while (!feof(f1) || !feof(f2))
    {
        fscanf(f1, "%511s", buf1);
        fscanf(f2, "%511s", buf2);

        if (strcmp(buf1, buf2) != 0)
        {
            printf("\nФайлы не равны!");
            getch();
            return;
        }
    }

    fclose(f1);
    fclose(f2);

    printf("\nФайлы равны!");

    getch();
}