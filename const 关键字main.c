#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	const float pi = 3.14;
	
	printf("%f",pi);
	
	int num=520;
	const int cnum =880;
	int*const p =&num;
	
	*p=1024;
	printf("*p:%d\n",*p);
	
	 //p=&cnum;
	 //printf("*p:%d\n",*p);
	 
	 
	return 0;
}
