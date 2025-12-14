#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) 
{
	char a,b;
	scanf("%c",&a);
	b=getchar();
	
	printf("%hhd %c \n",a,a);
	printf("%hhd %c \n",b,b);
	
	return 0;
}
