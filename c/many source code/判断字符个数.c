#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()//�ж��ַ�����
{
	char c;
	int c1=0, c2=0, c3=0;
	printf("������һ���ԡ�#����β���ַ�");
	scanf("%c", &c); //������char��ʽ
	while (c != '#')//�жϽ�β
	{
		if (c >= 'a' && c <= 'z')//�ж�Сд
			c1++;
		else if (c >= 'A' && c <= 'Z')//�жϴ�д
			c2++;
		else if (c >= '0' && c <= '9')//����Ӧ�����ű�ʾ�ַ�
			c3++;
		scanf("%c", &c);//��������ȷ��#��β
	}
	printf("Сд%d������д%d��������%d�� ", c1, c2, c3);


	return 0;
}