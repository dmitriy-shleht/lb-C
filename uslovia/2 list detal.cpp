#include <conio.h>
#include <stdio.h>  

/*2 �������  �஭㬥஢���� ᯨ᮪  ��⠫�� : 1)  ����, 2)
�����, 3) ����, 4) ������, 5) ����.���⠢��� �ணࠬ��, �����
�� ������ ��⠫� �뢮��� �� �࠭ �� ��������.*/
void main()
{
	int n;

	printf("������ ����� ��⠫�\n\"1)����, 2)�����, 3)����, 4)������, 5)����\"\n");
	scanf("%i", &n);

	switch(n)
	{
	case 1:
		printf("����"); break;
	case 2:
		printf("�����"); break;
	case 3:
		printf("����"); break;
	case 4:
		printf("������"); break;
	case 5:
		printf("����"); break;
	default:
		printf("��⠫� ��� ����஬ %i �� �������!", n); break;
	}

	getch();
}