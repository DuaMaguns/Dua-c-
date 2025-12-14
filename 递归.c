#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void re(void); 
void re(void)
{
	printf("Hi!\n");
	re();
}

int main(int argc, char *argv[]) 
{
	re();
	
	return 0;
}
