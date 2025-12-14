#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int array[4][5]={0};
	int i,j,l=0;

	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++);
		{
			
				array[i][j]=l++;
		}
		}
	}
		for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++);
		{
			
				printf("%d\n",array[i][j]);
			
		}
	}
	
	return 0;
}
