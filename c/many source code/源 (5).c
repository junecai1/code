#include<stdio.h>
#include<stdlib.h>
#include<time.h>//˫ɫ���������
#include<Windows.h>
int main()
{
	int numb;
	printf("����ע��");
	scanf_s("%d", &numb);
	while (1)
	{
		if ((--numb)<0)break;
		int num[7] = { 0 };
		srand(time(NULL));
		
		for (int i = 0; i < 7; i++)//������ֵ
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
		//�ж��Ƿ����ظ� ��ɫ��1-6�����ظ���ɫ��7�������ɫ���ظ�

		printf("������:");
		for (int i = 0; i < 7; i++)
		{
			printf("%-4d", num[i]);
			Sleep(100);
		}
		putchar('\n');
		
	}
	return 0;
}