#include<conio.h>
#include<stdio.h>

void AddRightDigit(int d, long int &k)
{
	k = k * 10 + d;
}


void main()
{
	long int k;
	int d;
	clrscr();

	printf("������ �᫮ �\n");
	scanf("%li", &k);

	printf("������ �᫮ d ��� ���������� ��� � ��� �\n");
	scanf("%i", &d);

	if(d < 0 || d > 9)
		printf("�訡�� ����� ���祭�� ��ࠬ��� d ������ ���� � �।���� 0-9\n");
	else
	{
		AddRightDigit(d, k);

		printf("१���� %li\n", k);

		AddRightDigit(d, k);

		printf("१���� %li\n", k);
	}


	getch();

}
