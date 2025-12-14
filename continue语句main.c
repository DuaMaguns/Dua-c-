#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int ch;
	
	while((ch=getchar())!='\n')
	{
		if(ch=='c')
		{
			continue;
		}
		putchar(ch);
	}
	
	putchar('\n');

	return 0;
}
