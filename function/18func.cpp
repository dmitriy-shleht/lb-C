#include<conio.h>
#include<stdio.h>
#include<math.h>

float CircleS(float r)
{
	return M_PI*pow(r,2);
}


void main()
{
	float r1, r2, r3;
	clrscr();

	printf("������ ࠤ���� ��� ��㣮�\n");
	scanf("%f%f%f", &r1, &r2, &r3);

	printf("���頤� ��㣠 � ࠤ��ᮬ %.2f = %.2f\n",r1, CircleS(r1));
	printf("���頤� ��㣠 � ࠤ��ᮬ %.2f = %.2f\n",r2, CircleS(r2));
	printf("���頤� ��㣠 � ࠤ��ᮬ %.2f = %.2f\n",r3, CircleS(r3));


	getch();
}
