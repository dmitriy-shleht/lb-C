#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define n 5

/*8. Дана последовательность целых чисел a1, a2, ..., an. 
Выяснить, будет ли она возрастающей*/
void main()
{
	randomize();
	clrscr();
	//int a[n] = {1,2,3,4,5};
	int flag = 0, i;

	for(i = 0; i < n; i++)
	{
	     a[i] = random(10);
		printf("%i ", a[i]);
	}

	if(a[0] >= a[1])
		flag = 1;

	for(i = 1; i < n-1; i++)
	{
		if(a[i] >= a[i+1])
			flag = 1;
	}

	if(flag == 1)
		printf("\nданная последовательность не возрастающая");
	else
     	printf("\nпоседовательность возрастающая");

  	getch();
}
