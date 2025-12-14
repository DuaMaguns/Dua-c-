#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#define N 10

int main(int argc, char *argv[]) 
{
	int i;
  /*int* ptr=NULL;
   
  	ptr=(int*)malloc(N*sizeof(int));
	if(ptr==NULL)
	{
		exit(1);
	}
	
  	memset(ptr,0,N*sizeof(int));
	*/

	int* ptr =(int*)calloc(8,sizeof(int));
		
	for(i=0;i<N;i++)
	{
		printf("%d ",ptr[i]);
 	}
	
	putchar('\n');
	
	free(ptr);

	return 0;
}  
