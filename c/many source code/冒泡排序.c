void BubbleSort(int*A, int len)
{
	int i,j,tmp;
	for (i = 0; i < len-1; i++)
	{
		for (j = 0; j < len-1-i; j++)
		{
			if (A[j] > A[j + 1])
			{
				tmp = A[j+1]; A[j + 1] = A[j]; A[j] = tmp;
			}
			
		}
	}

}
/*ð�������ǽ����ֵ�ú���һ����һ������������ִ��n-1����ͨ���ȽϽ����ķ�ʽ*/



#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 4
int main()
{

		int i, a[N];
		srand(time(NULL));
		for (i = 0; i < N; i++)
		{
			/*a[i] = rand() %10+ 90;*/
			scanf_s("%d", &a[i]);
		}
		BubbleSort(&a, N);
		for (i = 0; i < N; i++)
			printf("%4d", a[i]);
		return 0;
}
