#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>

/*13 В тексте перед каждым предложением, в котором встречается
заданное слово, поставить восклицательный знак*/
void main()
{
	clrscr();

    char find[512];
    char buf[512];
    int flag = 0;
    long int startPoz = 0, endPoz = 0;
    FILE *in = fopen("in.txt","r");
    FILE *out = fopen("out.txt","w+");

    printf("введите слово: ");
    scanf("%511s", &find);

    while (!feof(in))
    {
        char symbol = fgetc(in);

        if (symbol == '.')
        {
            endPoz = ftell(in);

            fseek(in, startPoz, 0);
            while (ftell(in) != endPoz)
            {
                fscanf(in, "%511s", buf);//читаем в буфер слово

                if (strcmp(buf, find) == 0)//находим слово
                {
                    flag = 1;
                    continue;
                }
            }

            //запись в выходной файл с стартовой позиции
            fseek(in, startPoz, 0);
            while (ftell(in) != endPoz)
            {
                if (flag == 1)
                {
                    fputc('!', out);
                    flag = 0;
                }

                fscanf(in, "%511s", buf); //читаем в буфер слово
                fprintf(out, "%s ", buf); //пишем в поток
            }
            
            startPoz = endPoz;
        }
    }

    fclose(in);
    fclose(out);

    printf("\nДля выхода нажмите любую клавишу...");
    getch();
}