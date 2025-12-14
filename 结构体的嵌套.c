#include <stdio.h>
#include <stdlib.h>

struct Date
{
	int year;
	int month;
	int day;	
};

struct Book
{
	char title[128];
	char author[40];
	float price;
	struct Date date;
	char publisher[40]; 
} book={
		"《带你学c带你飞》",
		"小甲鱼",
		49.9,
		{2017,11,11},
		"清华大学出版社"
}; 

int main(int argc, char *argv[]) 
{
	struct Book *pt;
	pt=&book;
	
	printf("书名：%s\n",pt->title); 
	printf("作者：%s\n",pt->author); 
	printf("售价：%.2f\n",pt->price); 
	printf("出版日期：%d-%d-%d\n",pt->date.year,pt->date.month,pt->date.day); 
	printf("出版社：%s\n",pt->publisher); 
	
	return 0;
}    
