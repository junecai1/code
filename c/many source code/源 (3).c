#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<Windows.h>
//将数字以十个一组依次输出
int main()
{
	char QQ[1000];
	scanf_s("%s", QQ);
	int i = 0,num=1;
while (QQ[i] != '\0')
	{
	if(i%10==0)
	printf("%d:", num++);
	printf("%c",QQ[i]);
	i++;
	if (i % 10 == 0) 
		putchar('\n');
	return 0;
}

}