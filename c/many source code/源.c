#include<stdio.h>
int main()
{
	int i,n,dnum=0,xnum=0;
	char a;
	printf("请输入字符个数：");
	scanf_s("%d", &n);
	printf("请输入%d个字符：",n);
	for (i = 0; i <=n; i++)
	{
		a = getchar();
		if (a >= 'a' && a <= 'z')
		{
			a -= 32;
			xnum++;
			putchar(a);
		}
		else if (a >= 'A' && a <= 'Z')
		{
			a += 32;
			dnum++;
			putchar(a);
		}

	}
	printf("\n共有小写字母：%d个\n大写字母：%d个",xnum,dnum);
	return 0;

}