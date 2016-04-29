#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>

/*7. Напишите программу, которая вычисляет среднее
арифметическое чисел, находящихся в файле.
1
2
3*/
void main()
{
	clrscr();
    float sred = 0;
    int in[10];    
    int  i, summ = 0, count = 0;

    FILE *n;
    n = fopen("1.txt","rt");

    if(!n)
    {
         puts("\nОшибка открытия файла");
         getch();
         return;
    }

    for(i = 0; i < 9; i++)
    {
	   fscanf(n,"%d", &in[i]);
         
	   summ += in[i];

	   if (in[i] != 0)
             count++;
    }

    fclose(n);
    sred = float(summ) / count;
    printf("\n\nСреднее арифметическое чисел в файле = %.2f", sred);

    getch();
}