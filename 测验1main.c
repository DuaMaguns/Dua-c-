#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a,bs,bw,zs,zw,Z;
	
	for(a=1;bs<1000;a++) 
	{
		bs=a*3;
		zs+=bs;
	}
	
	for(a=1;bw<1000;a++)
	{
		bw=a*5;
		zw+=bw;
	}
	
	
	
	printf("Z=%d",zs+zw);
	return 0;
}
