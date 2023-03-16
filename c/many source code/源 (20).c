#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)//该函数为switch分支结构
{
	int p,S;//p基础价格 w货重 s距离 d折扣 f运费
	float w, s,f, d;;
	printf("请依次输入基础价格，货重，距离");
	scanf("%d%f%f", &p, &w, &s);
	S = s / 250;//利用除法判定区间
	switch (S)
	{
	case 0:d = 0; break;
	case 1:d = 0.02; break;
	case 2:
	case 3:d = 0.05; break;
	case 4:
	case 5:
	case 6:
	case 7:d = 0.08; break;
	case 8:
	case 9:
	case 10:
	case 11:d = 0.1; break;
	default:d = 0.15; break;
	}
	f = p * w * s*(1 - d);
	printf("运费为:%f",f);
	return 0;
}