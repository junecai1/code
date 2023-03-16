#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)//判断能否被3，5，7整除。
{
	int A,a,b,c,d;
	printf("请输入整数：");
	scanf("%d", &a);
	A = a;//保留a值
	b = a%3;
	c = a%5;
	d = a%7;
	if (b == 0 && c==0 &&d==0)// 判断从多至少
		printf("%d能被3个数整除", A);
	else if(b==0&&c==0)
		printf("%d能被2个数整除,3和5", A);
	else if (b == 0 && d == 0)
		printf("%d能被2个数整除,3和7", A);
	else if (c== 0 && d== 0)
		printf("%d能被2个数整除,5和7", A);
	else if (b == 0)
		printf("%d能被3整除", A);
	else if (c == 0)
		printf("%d能被5整除", A);
	else if (d == 0)
		printf("%d能被7整除", A);
	else
		printf("%d不能被3个数整除", A);
	return 0;
}
