#include <conio.h>
#include <stdio.h>

/*13. ���� ���� �窨 A1(x1, y1), A2(x2, y2), A3(x3, y3), A4(x4, y4)
��।�����, ���� �� ��� ���設��� ��ࠫ�����ࠬ��.*/
void main()
{
	int x1, y1, x2, y2, x3, y3, x4, y4;

	printf("������ ���न���� A1(x1, y1)\n");
	scanf("%i%i", &x1, &y1);

	printf("������ ���न���� A2(x2, y2)\n");
	scanf("%i%i", &x2, &y2);

	printf("������ ���न���� A3(x3, y3)\n");
	scanf("%i%i", &x3, &y3);

	printf("������ ���न���� A4(x4, y4)\n");
	scanf("%i%i", &x4, &y4);


	if (((x2 - x1 == x4 - x3) && (y2 - y1 == y4 - y3))
		|| ((x2 - x1 == x3 - x4) && (y2 - y1 == y3 - y4))
		|| ((x3 - x1 == x4 - x2) && (y3 - y1 == y4 - y2))
		|| ((x3 - x1 == x2 - x4) && (y3 - y1 == y2 - y4))
		|| ((x4 - x1 == x3 - x2) && (y4 - y1 == y3 - y2))
		|| ((x4 - x1 == x2 - x3) && (y4 - y1 == y2 - y3)))
	printf("\n�� ��ࠫ�����ࠬ�");
	else
		printf("\n�� �� ��ࠫ�����ࠬ�");

	getch();
}