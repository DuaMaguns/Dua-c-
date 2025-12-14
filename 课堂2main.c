#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char ch;
	int num;
	float f;
	printf("请输入字符；");
	scanf("%c",&ch);
	getchar();
	printf("请输入整数：");
	scanf("%d",&num);
	getchar();
	printf("请输入浮点型：");
	scanf("%f",&f);
	printf("这几个数相加等于:%f",ch+num+f); 
	return 0;
}
