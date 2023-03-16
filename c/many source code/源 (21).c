#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)//该函数为if—else分支结构
{
	int p;//p基础价格 w货重 s距离 d折扣 f运费
	float w, s, f, d;;
	printf("请依次输入基础价格，货重，距离");
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
	printf("运费为:%f", f);
	return 0;
}