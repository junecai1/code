void swapsort(int* A, int len)
{
    int i, j, d;
    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {

            if (A[i] >= A[j])
            {
                d = A[i];
                A[i] = A[j];
                A[j] = d;
            }
        }
    }
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 4
int main()
{
    int i, len, a[N];
	srand(time(NULL));
	for (i = 0; i < N; i++)
	{
		a[i] = rand() %10+ 90;
		/*scanf_s("%d", &a[i]);*/
	}
    len = N;
	swapsort(&a, len);
	for (i = 0; i < N; i++)
		printf("%4d", a[i]);
	return 0;
}