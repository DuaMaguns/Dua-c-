#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,j; 
	
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",a[i][j]);
		}
	printf("\n");
	}
	
	printf("*a:%d\n",*a);
	printf("**a:%d\n",**a);
	return 0;
}
