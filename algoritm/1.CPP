#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>   


/*‚ëç¨á«¨âì  ¯¥à¨¬¥âà  ¨  ¯«®é ¤ì  ¯àï¬®ã£®«ì­®£®  âà¥ã£®«ì­¨ª 
¯® § ¤ ­­ë¬ ¤«¨­ ¬ ¤¢ãå ª â¥â®¢ € ¨ ‚*/
void main()
{
	clrscr();
	int a, b;
	float s=0, p=0;

	printf("¢¢¥¤¨â¥ áâ®à®­ã € ");
	scanf("%i", &a);

	printf("¢¢¥¤¨â¥ áâ®à®­ã B ");
	scanf("%i", &b);

	printf("\n¯«®é ¤ì âà¥ã£®«ì­¨ª  = %.2f", (a*b)/2.0);
	printf("\n¯¥à¨¬¥âà âà¥ã£®«ì­¨ª  = %.2f", a+b+sqrt(a*a+b*b));

	getch();
}