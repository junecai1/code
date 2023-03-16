#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()//判断字符个数
{
	char c;
	int c1=0, c2=0, c3=0;
	printf("请输入一串以“#”结尾的字符");
	scanf("%c", &c); //输入以char格式
	while (c != '#')//判断结尾
	{
		if (c >= 'a' && c <= 'z')//判断小写
			c1++;
		else if (c >= 'A' && c <= 'Z')//判断大写
			c2++;
		else if (c >= '0' && c <= '9')//数字应加引号表示字符
			c3++;
		scanf("%c", &c);//二次输入确保#结尾
	}
	printf("小写%d个，大写%d个，数字%d个 ", c1, c2, c3);


	return 0;
}