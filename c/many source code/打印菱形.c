#include<stdio.h>
#include<math.h>//��ѧͷ����  ��ӡ9*9����
int main()
{
	int i, j, k;
	for (i = -8; i < 9; i += 2)//�ԳƱ��
	{
		for (j = 1; j < abs(i) + 1; j += 2)/*���ƿո����������ֵ����*/
			printf(" ");
		for (k = abs(i); k < 9; k++)/*����#�����������ֵ����*/
		{
			printf("#");
		}
		printf("\n");/*��������*/
	}
	return 0;
}