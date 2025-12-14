#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char str1[]="Fishc";
	char str2[]="Fishc"; 
	
	if (!strcmp(str1,str2))
	{
		printf("两个字符串完全一致！\n");
	}
	else
	{
		printf("两个字符串存在差异！\n");
	}

	return 0;
}
