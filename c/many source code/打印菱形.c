#include<stdio.h>
#include<math.h>//数学头函数  打印9*9菱形
int main()
{
	int i, j, k;
	for (i = -8; i < 9; i += 2)//对称编号
	{
		for (j = 1; j < abs(i) + 1; j += 2)/*控制空格输出，绝对值赋右*/
			printf(" ");
		for (k = abs(i); k < 9; k++)/*控制#号输出，绝对值赋左*/
		{
			printf("#");
		}
		printf("\n");/*结束换行*/
	}
	return 0;
}