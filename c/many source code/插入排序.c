
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 4
//��������
void InsertSort(int* a, int n)
{
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		int end = i;//��¼�������е����һ��Ԫ�ص��±�
		int tmp = a[end + 1];//�������Ԫ��
		while (end >= 0)
		{
			if (tmp < a[end])//��������Ƚ�
			{
				a[end + 1] = a[end];
				end--;
			}
			else//�ҵ�Ӧ�����λ��
			{
				break;
			}
		}
		a[end + 1] = tmp;
		//����ִ�е���λ�����������:
		//1.������Ԫ���ҵ�Ӧ����λ�ã�break����ѭ�����ˣ���
		//2.������Ԫ�رȵ�ǰ���������е�����Ԫ�ض�С��whileѭ�������󵽴ˣ���
	}
}
int main()
{
	int i, a[N],len;
	srand(time(NULL));
	for (i = 0; i < N; i++)
	{
		/*a[i] = rand() %10+ 90;*/
		scanf_s("%d", &a[i]);
	}
	len = sizeof(a) / sizeof(a[0]);
	extern SwapSort(a,len);
	for (i = 0; i < N; i++)
		printf("%4d", a[i]);
	return 0;
}
