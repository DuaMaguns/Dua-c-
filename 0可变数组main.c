#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	int n,i;
	printf("请输入字符的个数：");
	scanf("%d",&n);
	
	char a[n+1];
	
	printf("请输入字符：");

	
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}
	
	a[n]='\0';
	printf("你输入的字符串是；%s",a);
	 
	return 0;
}
