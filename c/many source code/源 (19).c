#define _CRT_SECURE_NO_WARNINGS
#define ADD(x, y,c) 10*((x)+(y)+(c))
#include <stdio.h>
int main(void)
{
	printf("输入三个数：");
	int a, b,c;
	scanf("%d%d%d", &a, &b,&c);
	int sum = ADD(a, b,c);
	printf("sum = %d\n", sum);
	sum = 10 * ADD(a,b,c );
	printf("sum = %d\n", sum);
	int* su = &sum;
	printf("%p\n", su);
	*su = 10 * sum;
	printf("%d\n", sum);
	char w='w';
	char*p = &w;
	*p = 'q';
	printf("%p", *p);
	return 0;
}