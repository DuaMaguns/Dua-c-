#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a,b,h,S; 

	
	printf("请输入上帝：");
	scanf("%d",&a);
	printf("请输入下地：");
	scanf("%d",&b) ;
	printf("请输入高：");
	scanf("%d",&h);
	
	S=(a+b)/2*h;
	
	printf("梯形面积为：%d",S);
	return 0;
}
