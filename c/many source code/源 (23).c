#include<stdio.h>
int main(void)
{
	int a, b, c, d,MAX;
	printf("������4��������");
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	MAX = a;
	if (b > MAX)
		MAX = b;
	if (c > MAX)
		MAX = c;
	if (d > MAX)
		MAX = d;
	printf("���ֵΪ��%d", MAX);
	return 0;


}