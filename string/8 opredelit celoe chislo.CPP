#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

 void main()
 {
	clrscr();

	int i, f=0;
	char s[1000];

	printf("\t--введите строку--\n");
	gets(s);


	for(i=0; s[i] !=0; i++)
		if(!(s[i] >= '0' && s[i] <= '9'))
			f = 1;
	if(!f)
		printf("строка является целым числом");
	else
		printf("строка не является целым числом");

	getch();
 }