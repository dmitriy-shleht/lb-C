#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>

/*12 Удалить из текста,находящегося в файле,каждое четное предложение*/
void main()
{
	clrscr();

    int n=1;
    FILE *in = fopen("in.txt","r");
    FILE *out = fopen("out.txt","w+");
    
    while(!feof(in)){
        char c=fgetc(in);
        if(c!='.')
            n++;
        if(n%2)
        { 
            fputc(c,out);fputc(' ',out);
            for(c=fgetc(in);!isalpha(c) && !feof(in);c=fgetc(in););
        } 
        else
            fputc(c,out);
    }
    flose(in);
    fclose(out);

    getch();
}