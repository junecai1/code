#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)//�ú���Ϊif��else��֧�ṹ
{
	int p;//p�����۸� w���� s���� d�ۿ� f�˷�
	float w, s, f, d;;
	printf("��������������۸񣬻��أ�����");
	scanf("%d%f%f", &p, &w, &s);
	{
		if (s < 250.0)
			d = 0;
		else if (s >= 250.0 && s < 500.0)
			d = 0.02;
		else if (s >= 500.0 && s < 1000.0)
			d = 0.05;
		else if (s >= 1000.0 && s < 2000.0)
			d = 0.08;
		else if (s >= 2000.0 && s < 3000.0)
			d = 0.1;
		else
			d = 0.15;
	}
	f = p * w * s * (1 - d);
	printf("�˷�Ϊ:%f", f);
	return 0;
}