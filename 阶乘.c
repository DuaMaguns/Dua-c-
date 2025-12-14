#include <stdio.h>
#include <stdlib.h>

long fact(int num);
long fact(int num)
{ 
	long result;
	if (num>0)
	{
		result=num*fact(num-1);
	}
	else 
	{
		result=1;
	}
	return result;
	
}
int main(int argc, char *argv[]) 
{
	int num;
	printf("请输入一个正整数：");
	scanf("%d",&num);
	printf("%d",fact(num)); 
	
	return 0;
}
