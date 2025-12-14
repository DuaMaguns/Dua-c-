#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int temp[5]={1,2,3,4,5};
	int *p=temp;
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(p+i));
	}
	
	return 0;
}
