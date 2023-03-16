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
/*冒泡排序是将最大值置后，且一次让一个数据有序，需执行n-1次且通过比较交换的方式*/



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
