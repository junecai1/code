#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//����������ʾ��������
int main(void)
{
	int age, day;
	printf("please input:");
	scanf("%d", &age);
	day = age * 360;
	printf("���Ѿ�%d�꣬���ѳ���%d��",age, day);
	return 0;

}