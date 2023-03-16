#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//函数用来显示出生天数
int main(void)
{
	int age, day;
	printf("please input:");
	scanf("%d", &age);
	day = age * 360;
	printf("您已经%d岁，您已出生%d天",age, day);
	return 0;

}