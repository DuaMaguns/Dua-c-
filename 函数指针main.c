#include <stdio.h>
#include <stdlib.h>

int square(int);
int square(int num)
{
	return num*num;
}


int main(int argc, char *argv[]) 
{
	int num;
	int (*p)(int);
	
	printf("请输入一个整数：");
	scanf("%d",&num);
	
	p=square;
	
	printf("%d*%d=%d",num,num,(*p)(num));
	 
	return 0;
}
