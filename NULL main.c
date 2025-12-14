#include <stdio.h>
#include <stdlib.h>

#define NULL ((void*)0)

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int *d=NULL;
	int num=520;
	int*p=&num;
	int**pp=&p;
	
	printf("num;%d\n",num);
	printf("*p:%d\n",*p);
	printf("**p:%d\n",**pp);
	
	return 0;
}
