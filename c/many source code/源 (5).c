#include<stdio.h>
#include<stdlib.h>
#include<time.h>//双色球随机码组
#include<Windows.h>
int main()
{
	int numb;
	printf("输入注数");
	scanf_s("%d", &numb);
	while (1)
	{
		if ((--numb)<0)break;
		int num[7] = { 0 };
		srand(time(NULL));
		
		for (int i = 0; i < 7; i++)//生成数值
		{
			if (i < 6)
			{
				int j = i;
				int numbe = rand() % 32 + 1;
				while (1)
				{
					if ((j--) <=0)break;
					if (numb == num[j])numbe = rand() % 32 + 1;
					
				}num[i] = numbe;
			}
			else
				num[i] = rand() % 15 + 1;

		}
		//判断是否有重复 红色球（1-6）不重复蓝色球（7）可与红色球重复

		printf("随机球号:");
		for (int i = 0; i < 7; i++)
		{
			printf("%-4d", num[i]);
			Sleep(100);
		}
		putchar('\n');
		
	}
	return 0;
}