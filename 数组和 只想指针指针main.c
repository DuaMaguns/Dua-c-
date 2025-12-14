#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char *cBooks[]=
	{
		"《c程序设计语言》",
		"《c专家编程》", 
		"《c和指针》",
		"《c陷阱与缺陷》",
		"《c Primer Plus》",
		"《带你学c带你飞》", 
	}; 
	char **byFishC;
	char **jiayuLoves[4];
	
	byFishC=&cBooks[5];
	jiayuLoves[0]=&cBooks[0]; 
	jiayuLoves[1]=&cBooks[1]; 
	jiayuLoves[2]=&cBooks[2]; 
	jiayuLoves[3]=&cBooks[3]; 
	
	printf("FishC出版的书有：%s\n",*byFishC);
	printf("小甲鱼喜欢的书有：\n");
	
	int i;
	for(i=0;i<4;i++)
	{
		printf("%s\n",*jiayuLoves[i]);
	}
	
	
	
	
	return 0;
}
