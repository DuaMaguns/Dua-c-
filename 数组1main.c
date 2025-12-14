#include <stdio.h>
#include <stdlib.h>

#define NUM 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int s[NUM]; 
	int i, sum=0;
	
	for(i=0;i<10;i++)
	{
		printf("请输入第%i位同学的成绩:",i+1);
		scanf("%d",&s[i]);
		sum+=s[i];
	} 
	
	printf("成绩录入完毕，该次考试的平均分为：%.2f\n",(double)sum/NUM);
	
	return 0;
}

