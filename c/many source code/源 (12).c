#include<stdio.h>
#include<stdlib.h>
#include<time.h>//�Ӽ��˳�������ϰ
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
	int a = 0, b = 0, c, d, S=0;//������ʽa��b��c  ����d,�������S
	int i, right = 0;//ѭ����������right��ȷֵ
	int A[10] = { 0 }, n = 0;//�������鴢����ȷ���
	srand(time(NULL));//���������
	printf("��������ȷ�𰸣�\n");
	printf("��ȷ���Ѷ�easy��A��|difficult��B��");
	grade = getchar();
	for (i = 0; i < 10; i++)
	{
		d = rand() % (4 - 1 + 1) + 1;//��������� �޶���Χrand()%��max-min+1)+min

		switch (grade)//���ؿ����Ѷ�
		{
		case 'A':S = 100; break;

			/*a = (rand() % (100 - 1) + 1) + 1, b = (rand() % (100 - 1 + 1) + 1);*/
			//if(a-b<0)
			//{
			//	a = a ^ b, b = a ^ b, a = a ^ b;
			//}
			///*change(a,b);*/
			//switch (d)//���ؿ�����ʽ����
			//{
			//case 1:printf("%d+%d=", a,b); break;
			//case 2:printf("%d-%d=", a,b); break;
			//case 3:printf("%d*%d=", a,b); break;
			//case 4:printf("%d��%d=", a,b); break;
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
			case 4:printf("%d��%d=", a,b); break;
			}break;*/
		}
		a = rand() % S + 1, b = rand() % S + 1;
		if (a - b < 0)
		{
			a = a ^ b, b = a ^ b, a = a ^ b;
		}
		/*change(a, b); */
		switch (d)//���ؿ�����ʽ����
		{
		case 1:printf("%d+%d=", a, b); break;
		case 2:printf("%d-%d=", a, b); break;
		case 3:printf("%d*%d=", a, b); break;
		case 4:printf("%d��%d=", a, b); break;
		}
		scanf_s("%d", &c);
		if (c==a + b || c==a - b  || c==a * b  || c==a / b )//�����
		{
				right++;
				A[n] = i+1;
				n++;
		}

		
	}
	printf("���ƴ��%d��", right);
	if (n == 0)
		printf(" ");
	else
		printf("�ֱ�Ϊ��");
	for (n = 0; n < 10; n++)
	{
		if (A[n] == 0)
			break;
		printf("��%d��", A[n]);

	}
	return 0;
}

