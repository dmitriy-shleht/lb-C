#include <stdio.h>
#include <conio.h>
#include <string.h>

 void main()
 {
	clrscr();

	int i, j, f = 0;
	char s[100];
	char x[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

	printf("\t--введите строку--\n");
	scanf("%s", &s);

	strupr(s);

	for (i = 0; s[i] != 0 && f == 0; i++)
		for (j = 0; j < 16; j++)
		{
			if (s[i] != x[j])
				f = 1;
			else
			{
				f = 0;
				break;
			}
		}

	if (f != 1)
		printf("строка является шеснадцатиричным числом");
	else
		printf("строка не является шеснадцатиричным числом");

	getch();
 }