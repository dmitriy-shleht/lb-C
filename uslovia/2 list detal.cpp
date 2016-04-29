#include <conio.h>
#include <stdio.h>  

/*2 Имеется  пронумерованный список  деталей : 1)  шуруп, 2)
гайка, 3) винт, 4) гвоздь, 5) болт.Составить программу, которая
по номеру детали выводит на экран ее название.*/
void main()
{
	int n;

	printf("Введите номер детали\n\"1)шуруп, 2)гайка, 3)винт, 4)гвоздь, 5)болт\"\n");
	scanf("%i", &n);

	switch(n)
	{
	case 1:
		printf("шуруп"); break;
	case 2:
		printf("гайка"); break;
	case 3:
		printf("винт"); break;
	case 4:
		printf("гвоздь"); break;
	case 5:
		printf("болт"); break;
	default:
		printf("Деталь под номером %i не найдена!", n); break;
	}

	getch();
}