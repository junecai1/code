#include<stdio.h>
typedef struct NODE
{
	int date;
	struct NODE* next;
}NODE;
int main()
{
	NODE data1= { 145,NULL };
	printf("%d %p", data1.date, data1.next);
	return 0;
}