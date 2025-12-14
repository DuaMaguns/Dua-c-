#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int array[3][4]=
	{{0,1,2,3},
	 {4,5,6,7},
	 {8,9,10,11}
	};
	
	int (*p)[4]=array;
	
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
		
			printf("%d  ",*(*(p+i)+j));
		}
	printf("\n");
	}
	
	return 0;
}
