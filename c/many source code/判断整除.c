#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)//�ж��ܷ�3��5��7������
{
	int A,a,b,c,d;
	printf("������������");
	scanf("%d", &a);
	A = a;//����aֵ
	b = a%3;
	c = a%5;
	d = a%7;
	if (b == 0 && c==0 &&d==0)// �жϴӶ�����
		printf("%d�ܱ�3��������", A);
	else if(b==0&&c==0)
		printf("%d�ܱ�2��������,3��5", A);
	else if (b == 0 && d == 0)
		printf("%d�ܱ�2��������,3��7", A);
	else if (c== 0 && d== 0)
		printf("%d�ܱ�2��������,5��7", A);
	else if (b == 0)
		printf("%d�ܱ�3����", A);
	else if (c == 0)
		printf("%d�ܱ�5����", A);
	else if (d == 0)
		printf("%d�ܱ�7����", A);
	else
		printf("%d���ܱ�3��������", A);
	return 0;
}
