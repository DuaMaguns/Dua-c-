#include <stdio.h>
#include <stdlib.h>

int sum(int n);

int sum(int n)
{
	int result =0;
	
	do
	{
		result+=n;
		n--;
	}while(n>0);
	
	return result;
}


int main(int argc, char *argv[]) 
{
	int n,result;
	
	printf("请输入n的值:");
	scanf("%d",&n);
	
	//result=sum(n);
	
	printf("前n相求和的结果是：%d\n",sum(n));
	return 0;
}
