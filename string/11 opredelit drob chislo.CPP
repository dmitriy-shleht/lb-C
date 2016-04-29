#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*11 Написать программу, которая проверяет, 
является ли введенная с клавиатуры строка дробным числом*/
 void main()
 {
	clrscr();

	int i=0, f=0;
	char s[1000];

	printf("\t--введите строку--\n");
	gets(s);

	if (s[i] >= '0' && s[i] <= '9')
	{
		while (s[i] >= '0' && s[i] <= '9')
			i++;
		if (s[i] == '.')
		{
			i++;
			if (s[i] >= '0' && s[i] <= '9')
			{
				while (s[i] >= '0' && s[i] <= '9')
					i++;
				f = 1;
			}
		}
	}


	if(s[i] || !f)
		printf("строка не является дробным числом");
	else
		printf("строка является дробным числом");

	getch();
 }