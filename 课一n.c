#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415
#define S(r) PI*r*r 
#define C(r) PI*2*r 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])      
{
	int r;

	printf("请输入半径：");
	scanf("%d",&r);
	
	printf("半径为%d的圆，面积是：%.3f,周长是：%.3f\n",r,S(r),C(r));	
	
	
	return 0;

}


