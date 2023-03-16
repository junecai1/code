#include<stdio.h>
int main()
{
while(1)
{
		int a, b = 0;
		scanf_s("%d", &a);
		if (a % 3 == 0) b = b + 1;
		if (a % 5 == 0) b = b + 2;
		if (a % 7 == 0) b = b + 4;
		switch (b)
		{
		case 0: printf("不被整除"); break;
		case 1: printf("被3整除"); break;
		case 2: printf("被5整除"); break;
		case 3: printf("被3，5整除"); break;
		case 4: printf("被7整除"); break;
		case 5: printf("被3，7整除"); break;
		case 6: printf("被5，7整除"); break;
		case 7: printf("被3，5，7整除"); break;
		}
		return 0;
		if(getchar()==0) break;
}
}