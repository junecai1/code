#include<stdio.h>
#include<stdlib.h>
#include<time.h>//加减乘除计算练习
//int change(x, y)
//{
	/*if (x < y)
	{
		x = x ^ y, y = x ^ y, x = x ^ y;
		return(x,y);
	}
	else
		x = x, y = y;
	return(x,y);
}*/
	
int main()
{
	char grade;
	int a = 0, b = 0, c, d, S=0;//定义算式a，b，c  符号d,随机界限S
	int i, right = 0;//循环变量，及right正确值
	int A[10] = { 0 }, n = 0;//创建数组储存正确题号
	srand(time(NULL));//随机数种子
	printf("请输入正确答案：\n");
	printf("请确认难度easy（A）|difficult（B）");
	grade = getchar();
	for (i = 0; i < 10; i++)
	{
		d = rand() % (4 - 1 + 1) + 1;//随机数生成 限定范围rand()%（max-min+1)+min

		switch (grade)//开关控制难度
		{
		case 'A':S = 100; break;

			/*a = (rand() % (100 - 1) + 1) + 1, b = (rand() % (100 - 1 + 1) + 1);*/
			//if(a-b<0)
			//{
			//	a = a ^ b, b = a ^ b, a = a ^ b;
			//}
			///*change(a,b);*/
			//switch (d)//开关控制算式生成
			//{
			//case 1:printf("%d+%d=", a,b); break;
			//case 2:printf("%d-%d=", a,b); break;
			//case 3:printf("%d*%d=", a,b); break;
			//case 4:printf("%d÷%d=", a,b); break;
			//}break;
		case 'B':S = 1000; break;

			/*a = (rand() % (10000 - 1) + 1) + 1, b = (rand() % (10000 - 1 + 1) + 1);
			if (a - b < 0)
			{
				a = a ^ b, b = a ^ b, a = a ^ b;
			}*/
			/*change(a,b);*/
			/*switch (d)
			{
			case 1:printf("%d+%d=", a,b); break;
			case 2:printf("%d-%d=", a,b); break;
			case 3:printf("%d*%d=", a,b); break;
			case 4:printf("%d÷%d=", a,b); break;
			}break;*/
		}
		a = rand() % S + 1, b = rand() % S + 1;
		if (a - b < 0)
		{
			a = a ^ b, b = a ^ b, a = a ^ b;
		}
		/*change(a, b); */
		switch (d)//开关控制算式生成
		{
		case 1:printf("%d+%d=", a, b); break;
		case 2:printf("%d-%d=", a, b); break;
		case 3:printf("%d*%d=", a, b); break;
		case 4:printf("%d÷%d=", a, b); break;
		}
		scanf_s("%d", &c);
		if (c==a + b || c==a - b  || c==a * b  || c==a / b )//检验答案
		{
				right++;
				A[n] = i+1;
				n++;
		}

		
	}
	printf("共计答对%d道", right);
	if (n == 0)
		printf(" ");
	else
		printf("分别为：");
	for (n = 0; n < 10; n++)
	{
		if (A[n] == 0)
			break;
		printf("第%d道", A[n]);

	}
	return 0;
}

