#include <conio.h>
#include <stdio.h>

//8 ��।�����, ����⥫�� ����� �ᥫ �, b, c ���� �᫮ k.
void main()
{
	int a, b, c, k;

	printf("������ �� �᫠ (�, �, �,) \n");
	scanf("%i%i%i", &a, &b, &c);

	printf("������ ����⥫� k \n");
	scanf("%i", &k);

	if (a % k == 0)
		printf("\n��᫮ %i ���� ����⥫�� �᫠ %i", k, a);
	if (b % k == 0)
		printf("\n��᫮ %i ���� ����⥫�� �᫠ %i", k, b);
	if (c % k == 0)
		printf("\n��᫮ %i ���� ����⥫�� �᫠ %i", k, c);

	getch();
}