#include <stdio.h>
#include <stdlib.h>

int add(int,int);
int add(int num1,int num2)
{
	return num1+num2;
}

int sub(int,int);
int sub(int num1,int num2)
{
	return num1-num2;
}

int calc(int(*fp)(int,int),int,int);
int calc(int(*fp)(int,int),int num1,int num2)
{
	return (*fp)(num1,num2);
}
int (*select(char op))(int,int);
int (*select(char op))(int,int)
{
	switch(op)
	{
		case'+':return add;
		case'-':return sub; 
	}
}
int main(int argc, char *argv[]) 
{
	int num1,num2;
	char op;
	int (*fp)(int,int);
	
	printf("请输入一个式子：");
	scanf("%d%c%d",&num1,&op,&num2);
	
	fp=select(op);
	printf("%d %c %d=%d\n",num1,op,num2,calc(fp,num1,num2));
	 
	return 0;
}
