#include <stdio.h>
#include <stdlib.h>

struct Tel
{
	char name[20];
	int unm;
};


int main(int argc, char *argv[]) 
{
	struct Tel tels[5]=
	{
		{"老11",1},
		{"老1",2},
		{"老2",2},
		{"老3",2},
		{"老4",2},
	};
	
	int i;
	for(i=0;i<5;i++)
	{
		printf("%s  %d\n",tels[i].name,tels[i].unm);
	}
	return 0;
}
