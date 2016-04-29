#include <conio.h>
#include <stdio.h>
#include <math.h>   
#include <locale.h>

/*8 Числа фибоначи, определить F40*/
long int fib (int n)
{
    if(n==1 || n==2)
            return 1;
    else
        return fib(n-1) + fib(n-2);
}

void main()
{
	clrscr();

	printf("F40 = %li", fib(40));
	
	getch();
}