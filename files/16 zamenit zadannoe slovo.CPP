#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>

/*16 Заменить заданное слово в тексте, находящемся в заданном 
файле, на другое слово*/
void main()
{
	clrscr();

    int count = 0;
    char find[512];
    char replace[512];
    char buf[512];
    FILE *in = fopen("in.txt","r");
    FILE *out = fopen("out.txt","w+");

    printf("найти: ");
    scanf("%511s", &find);

    printf("заменить на: ");
    scanf("%511s", &replace);
    
    
    while (!feof(in))
    {
        fscanf(in, "%511s", buf);//читаем в буфер слово

        if (strcmp(buf, find) == 0) //0-слово найдено
        {    
            strcpy(buf, replace); //заменяем слово
            count++;
        }

        fprintf(out, "%s ", buf); //записываем в потом
    }

    fclose(in);
    fclose(out);

    printf("\nЗаменено %i cлов(а)", count);

    getch();
}