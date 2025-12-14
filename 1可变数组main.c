#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int n,i;
	printf("请输入字符的个数：");
	scanf("%d",&n);
	
	char a[n+1];
	
	printf("请输入字符：");
	getchar();
	
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}
	
	a[n]='\0';
	printf("你输入的字符串是；%s",a);
	 
	return 0;
}
