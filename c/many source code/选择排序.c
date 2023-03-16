#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 99
void selectionsort(int* A, int len)
{
	int i, j, min,tmp;
	for (i = 0; i < len; i++)
	{
		min =i;
		for (j =i+1; j < len; j++)
		{
			if (A[min] > A[j])
			{
				min =j;
			}
		}
		tmp = A[i]; A[i] =A[min]; A[min] = tmp;
			
	}
}
int main()
{
	int i, len, a[N];
	srand(time(NULL));
	for (i = 0; i < N; i++)
	{
		a[i] = rand() % 100;
		/*scanf_s("%d", &a[i]);*/
	}
	len = N;
	selectionsort(&a, len);
	for (i = 0; i < N; i++)
		printf("%4d", a[i]);
	return 0;
}